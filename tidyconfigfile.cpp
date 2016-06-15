#include "tidyconfigfile.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QDebug>

TidyConfigFile::TidyConfigFile(const QString& path)
{    
   m_path.append(path).append("/").append(CONFIG_FILE_NAME);
}

QMap<int, QString> TidyConfigFile::parseRules()
{
    QMap<int, QString> map;

    // Read the entire file
    QFile file(m_path);
    file.open(QFile::ReadOnly);
    QString fileContent = file.readAll();
    file.close();

    // Get the root json object
    QJsonDocument jsonDoc = QJsonDocument::fromJson(fileContent.toUtf8());
    QJsonObject jsonRootObject = jsonDoc.object();

    // Check if there are rules
    if (!jsonRootObject.contains(RULES_FIELD_NAME)) {
        qInfo() << "There is no rules in the config file " << m_path;
        return map;
    }

    // Put the rules in the map
    QJsonObject jsonRulesObject = jsonRootObject.value("rules").toObject();
    for (QJsonObject::iterator it = jsonRulesObject.begin() ; it != jsonRulesObject.end(); it++) {
        map.insert(it.key().toInt(), it.value().toString());
    }

    return map;
}

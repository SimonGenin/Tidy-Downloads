#ifndef TIDYCONFIGFILE_H
#define TIDYCONFIGFILE_H

#include <QMap>
#include <QVector>

class TidyConfigFile
{
public:
    TidyConfigFile(const QString& path);

    QMap<int, QString> parseRules();
    QVector<QString> parsePaths();

private:

    const QString CONFIG_FILE_NAME = ".tidyconfig";
    const QString RULES_FIELD_NAME = "rules";

    QString m_path;

};

#endif // TIDYCONFIGFILE_H

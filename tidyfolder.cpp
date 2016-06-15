#include "tidyfolder.h"
#include <QDebug>
#include <QFile>


TidyFolder::TidyFolder(const QString &path) : QDir(path)
{
    rules = parseRulesFile();
}

QVector<TidyRules> TidyFolder::parseRulesFile()
{
    QVector<TidyRules> rulesVector = QVector<TidyRules>();

    // TODO read file for json and get the rules

    return rulesVector;
}

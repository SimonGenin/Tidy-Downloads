#ifndef TIDYFOLDER_H
#define TIDYFOLDER_H

#include <QVector>
#include <QDir>
#include "tidyrules.h"

class TidyFolder : public QDir
{
public:

    TidyFolder(const QString &path);

private:


    QVector<TidyFolder>childTidyFolders;
    QVector<TidyRules> rules;

    QVector<TidyRules> parseRulesFile();

};

#endif // TIDYFOLDER_H

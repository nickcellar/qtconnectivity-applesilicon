/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -v org.neard.Adapter.xml -p adapter -v
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "adapter_p.h" // HAND-EDIT

/*
 * Implementation of interface class OrgNeardAdapterInterface
 */

OrgNeardAdapterInterface::OrgNeardAdapterInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgNeardAdapterInterface::~OrgNeardAdapterInterface()
{
}


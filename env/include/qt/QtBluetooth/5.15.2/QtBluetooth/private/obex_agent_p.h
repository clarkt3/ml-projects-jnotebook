/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a obex_agent_p.h:obex_agent.cpp org.openobex.agent.xml org.openobex.Agent
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef OBEX_AGENT_P_H
#define OBEX_AGENT_P_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.openobex.Agent
 */
class AgentAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.openobex.Agent")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.openobex.Agent\">\n"
"    <method name=\"Release\"/>\n"
"    <method name=\"Request\">\n"
"      <arg direction=\"in\" type=\"o\"/>\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"Progress\">\n"
"      <arg direction=\"in\" type=\"o\"/>\n"
"      <arg direction=\"in\" type=\"t\"/>\n"
"    </method>\n"
"    <method name=\"Complete\">\n"
"      <arg direction=\"in\" type=\"o\"/>\n"
"    </method>\n"
"    <method name=\"Error\">\n"
"      <arg direction=\"in\" type=\"o\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    AgentAdaptor(QObject *parent);
    virtual ~AgentAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void Complete(const QDBusObjectPath &in0);
    void Error(const QDBusObjectPath &in0, const QString &in1);
    void Progress(const QDBusObjectPath &in0, qulonglong in1);
    void Release();
    QString Request(const QDBusObjectPath &in0);
Q_SIGNALS: // SIGNALS
};

#endif

#include "testobjectplugin.h"
#include "testobject.h"
#include "testobjectsubclass.h"
#include <QtQml>

namespace RubyQml {

TestObjectPlugin::TestObjectPlugin(QObject *parent) :
    QObject(parent)
{
    qRegisterMetaType<TestObject *>();
}

TestObject *TestObjectPlugin::createTestObject()
{
    return new TestObject();
}

TestObjectSubclass *TestObjectPlugin::createTestObjectSubclass()
{
    return new TestObjectSubclass();
}

} // namespace RubyQml

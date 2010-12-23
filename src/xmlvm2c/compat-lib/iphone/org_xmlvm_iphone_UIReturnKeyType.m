
#include "org_xmlvm_iphone_UIReturnKeyType.h"

__TIB_DEFINITION_org_xmlvm_iphone_UIReturnKeyType __TIB_org_xmlvm_iphone_UIReturnKeyType = {
    0, // classInitialized
    "org.xmlvm.iphone.UIReturnKeyType", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_java_lang_Object, // extends
};

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION

static JAVA_INT _STATIC_org_xmlvm_iphone_UIReturnKeyType_Default;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIReturnKeyType_Go;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIReturnKeyType_Google;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIReturnKeyType_Join;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIReturnKeyType_Next;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIReturnKeyType_Route;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIReturnKeyType_Search;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIReturnKeyType_Send;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIReturnKeyType_Yahoo;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIReturnKeyType_Done;
static JAVA_INT _STATIC_org_xmlvm_iphone_UIReturnKeyType_EmergencyCall;

void __INIT_org_xmlvm_iphone_UIReturnKeyType()
{
    __TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_java_lang_Object.classInitialized) __INIT_java_lang_Object();
    __TIB_org_xmlvm_iphone_UIReturnKeyType.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_UIReturnKeyType;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_UIReturnKeyType.vtable, __TIB_java_lang_Object.vtable, sizeof(__TIB_java_lang_Object.vtable));
    // Initialize vtable for this class
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_UIReturnKeyType.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_UIReturnKeyType.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Default = 0;
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Go = 1;
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Google = 2;
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Join = 3;
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Next = 4;
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Route = 5;
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Search = 6;
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Send = 7;
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Yahoo = 8;
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Done = 9;
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_EmergencyCall = 10;


    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_UIReturnKeyType]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_UIReturnKeyType(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_UIReturnKeyType]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_UIReturnKeyType()
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    org_xmlvm_iphone_UIReturnKeyType* me = (org_xmlvm_iphone_UIReturnKeyType*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_UIReturnKeyType));
    me->tib = &__TIB_org_xmlvm_iphone_UIReturnKeyType;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_UIReturnKeyType]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIReturnKeyType()
{
    JAVA_OBJECT me = JAVA_NULL;
    me = __NEW_org_xmlvm_iphone_UIReturnKeyType();
    org_xmlvm_iphone_UIReturnKeyType___INIT___(me);
    return me;
}

JAVA_INT org_xmlvm_iphone_UIReturnKeyType_GET_Default()
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    return _STATIC_org_xmlvm_iphone_UIReturnKeyType_Default;
}

void org_xmlvm_iphone_UIReturnKeyType_PUT_Default(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Default = v;
}

JAVA_INT org_xmlvm_iphone_UIReturnKeyType_GET_Go()
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    return _STATIC_org_xmlvm_iphone_UIReturnKeyType_Go;
}

void org_xmlvm_iphone_UIReturnKeyType_PUT_Go(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Go = v;
}

JAVA_INT org_xmlvm_iphone_UIReturnKeyType_GET_Google()
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    return _STATIC_org_xmlvm_iphone_UIReturnKeyType_Google;
}

void org_xmlvm_iphone_UIReturnKeyType_PUT_Google(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Google = v;
}

JAVA_INT org_xmlvm_iphone_UIReturnKeyType_GET_Join()
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    return _STATIC_org_xmlvm_iphone_UIReturnKeyType_Join;
}

void org_xmlvm_iphone_UIReturnKeyType_PUT_Join(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Join = v;
}

JAVA_INT org_xmlvm_iphone_UIReturnKeyType_GET_Next()
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    return _STATIC_org_xmlvm_iphone_UIReturnKeyType_Next;
}

void org_xmlvm_iphone_UIReturnKeyType_PUT_Next(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Next = v;
}

JAVA_INT org_xmlvm_iphone_UIReturnKeyType_GET_Route()
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    return _STATIC_org_xmlvm_iphone_UIReturnKeyType_Route;
}

void org_xmlvm_iphone_UIReturnKeyType_PUT_Route(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Route = v;
}

JAVA_INT org_xmlvm_iphone_UIReturnKeyType_GET_Search()
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    return _STATIC_org_xmlvm_iphone_UIReturnKeyType_Search;
}

void org_xmlvm_iphone_UIReturnKeyType_PUT_Search(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Search = v;
}

JAVA_INT org_xmlvm_iphone_UIReturnKeyType_GET_Send()
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    return _STATIC_org_xmlvm_iphone_UIReturnKeyType_Send;
}

void org_xmlvm_iphone_UIReturnKeyType_PUT_Send(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Send = v;
}

JAVA_INT org_xmlvm_iphone_UIReturnKeyType_GET_Yahoo()
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    return _STATIC_org_xmlvm_iphone_UIReturnKeyType_Yahoo;
}

void org_xmlvm_iphone_UIReturnKeyType_PUT_Yahoo(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Yahoo = v;
}

JAVA_INT org_xmlvm_iphone_UIReturnKeyType_GET_Done()
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    return _STATIC_org_xmlvm_iphone_UIReturnKeyType_Done;
}

void org_xmlvm_iphone_UIReturnKeyType_PUT_Done(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_Done = v;
}

JAVA_INT org_xmlvm_iphone_UIReturnKeyType_GET_EmergencyCall()
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    return _STATIC_org_xmlvm_iphone_UIReturnKeyType_EmergencyCall;
}

void org_xmlvm_iphone_UIReturnKeyType_PUT_EmergencyCall(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UIReturnKeyType.classInitialized) __INIT_org_xmlvm_iphone_UIReturnKeyType();
    _STATIC_org_xmlvm_iphone_UIReturnKeyType_EmergencyCall = v;
}

void org_xmlvm_iphone_UIReturnKeyType___INIT___(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UIReturnKeyType___INIT___]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}


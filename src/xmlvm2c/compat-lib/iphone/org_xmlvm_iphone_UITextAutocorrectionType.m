#include "xmlvm.h"

#include "org_xmlvm_iphone_UITextAutocorrectionType.h"

#define XMLVM_CURRENT_CLASS_NAME UITextAutocorrectionType
#define XMLVM_CURRENT_PKG_CLASS_NAME org_xmlvm_iphone_UITextAutocorrectionType

__TIB_DEFINITION_org_xmlvm_iphone_UITextAutocorrectionType __TIB_org_xmlvm_iphone_UITextAutocorrectionType = {
    0, // classInitialized
    __INIT_org_xmlvm_iphone_UITextAutocorrectionType, // classInitializer
    "org.xmlvm.iphone.UITextAutocorrectionType", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_java_lang_Object, // extends
    XMLVM_TYPE_CLASS};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITextAutocorrectionType;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITextAutocorrectionType_ARRAYTYPE;

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION

static JAVA_INT _STATIC_org_xmlvm_iphone_UITextAutocorrectionType_Default;
static JAVA_INT _STATIC_org_xmlvm_iphone_UITextAutocorrectionType_No;
static JAVA_INT _STATIC_org_xmlvm_iphone_UITextAutocorrectionType_Yes;

#include "xmlvm-reflection.h"

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
    {"Default",
    &__CLASS_int,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UITextAutocorrectionType_Default,
    "",
    JAVA_NULL},
    {"No",
    &__CLASS_int,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UITextAutocorrectionType_No,
    "",
    JAVA_NULL},
    {"Yes",
    &__CLASS_int,
    0 | java_lang_reflect_Modifier_PUBLIC | java_lang_reflect_Modifier_STATIC,
    0,
    &_STATIC_org_xmlvm_iphone_UITextAutocorrectionType_Yes,
    "",
    JAVA_NULL},
};

static JAVA_OBJECT* __constructor0_arg_types[] = {
};

static XMLVM_CONSTRUCTOR_REFLECTION_DATA __constructor_reflection_data[] = {
    {&__constructor0_arg_types[0],
    sizeof(__constructor0_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
};

static JAVA_OBJECT constructor_dispatcher(JAVA_OBJECT constructor, JAVA_OBJECT arguments)
{
    JAVA_OBJECT obj = __NEW_org_xmlvm_iphone_UITextAutocorrectionType();
    java_lang_reflect_Constructor* c = (java_lang_reflect_Constructor*) constructor;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    switch (c->fields.java_lang_reflect_Constructor.slot_) {
    case 0:
        org_xmlvm_iphone_UITextAutocorrectionType___INIT___(obj);
        break;
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return obj;
}

static XMLVM_METHOD_REFLECTION_DATA __method_reflection_data[] = {
};

static JAVA_OBJECT method_dispatcher(JAVA_OBJECT method, JAVA_OBJECT receiver, JAVA_OBJECT arguments)
{
    JAVA_OBJECT result = JAVA_NULL; //TODO need to set result
    java_lang_Object* obj = receiver;
    java_lang_reflect_Method* m = (java_lang_reflect_Method*) method;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    switch (m->fields.java_lang_reflect_Method.slot_) {
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return result;
}

void __INIT_org_xmlvm_iphone_UITextAutocorrectionType()
{
    __TIB_org_xmlvm_iphone_UITextAutocorrectionType.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_java_lang_Object.classInitialized) __INIT_java_lang_Object();
    __TIB_org_xmlvm_iphone_UITextAutocorrectionType.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_UITextAutocorrectionType;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_UITextAutocorrectionType.vtable, __TIB_java_lang_Object.vtable, sizeof(__TIB_java_lang_Object.vtable));
    // Initialize vtable for this class
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_UITextAutocorrectionType.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_UITextAutocorrectionType.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);
    _STATIC_org_xmlvm_iphone_UITextAutocorrectionType_Default = 0;
    _STATIC_org_xmlvm_iphone_UITextAutocorrectionType_No = 1;
    _STATIC_org_xmlvm_iphone_UITextAutocorrectionType_Yes = 2;

    __TIB_org_xmlvm_iphone_UITextAutocorrectionType.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_UITextAutocorrectionType.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_UITextAutocorrectionType.constructorDispatcherFunc = constructor_dispatcher;
    __TIB_org_xmlvm_iphone_UITextAutocorrectionType.declaredConstructors = &__constructor_reflection_data[0];
    __TIB_org_xmlvm_iphone_UITextAutocorrectionType.numDeclaredConstructors = sizeof(__constructor_reflection_data) / sizeof(XMLVM_CONSTRUCTOR_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_UITextAutocorrectionType.methodDispatcherFunc = method_dispatcher;
    __TIB_org_xmlvm_iphone_UITextAutocorrectionType.declaredMethods = &__method_reflection_data[0];
    __TIB_org_xmlvm_iphone_UITextAutocorrectionType.numDeclaredMethods = sizeof(__method_reflection_data) / sizeof(XMLVM_METHOD_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_UITextAutocorrectionType = XMLVM_CREATE_CLASS_OBJECT(&__TIB_org_xmlvm_iphone_UITextAutocorrectionType);
    __TIB_org_xmlvm_iphone_UITextAutocorrectionType.clazz = __CLASS_org_xmlvm_iphone_UITextAutocorrectionType;
    __CLASS_org_xmlvm_iphone_UITextAutocorrectionType_ARRAYTYPE = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_UITextAutocorrectionType, 1);

    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_UITextAutocorrectionType]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_UITextAutocorrectionType(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_UITextAutocorrectionType]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_UITextAutocorrectionType()
{
    if (!__TIB_org_xmlvm_iphone_UITextAutocorrectionType.classInitialized) __INIT_org_xmlvm_iphone_UITextAutocorrectionType();
    org_xmlvm_iphone_UITextAutocorrectionType* me = (org_xmlvm_iphone_UITextAutocorrectionType*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_UITextAutocorrectionType));
    me->tib = &__TIB_org_xmlvm_iphone_UITextAutocorrectionType;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_UITextAutocorrectionType]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UITextAutocorrectionType()
{
    JAVA_OBJECT me = JAVA_NULL;
    me = __NEW_org_xmlvm_iphone_UITextAutocorrectionType();
    org_xmlvm_iphone_UITextAutocorrectionType___INIT___(me);
    return me;
}

JAVA_INT org_xmlvm_iphone_UITextAutocorrectionType_GET_Default()
{
    if (!__TIB_org_xmlvm_iphone_UITextAutocorrectionType.classInitialized) __INIT_org_xmlvm_iphone_UITextAutocorrectionType();
    return _STATIC_org_xmlvm_iphone_UITextAutocorrectionType_Default;
}

void org_xmlvm_iphone_UITextAutocorrectionType_PUT_Default(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UITextAutocorrectionType.classInitialized) __INIT_org_xmlvm_iphone_UITextAutocorrectionType();
    _STATIC_org_xmlvm_iphone_UITextAutocorrectionType_Default = v;
}

JAVA_INT org_xmlvm_iphone_UITextAutocorrectionType_GET_No()
{
    if (!__TIB_org_xmlvm_iphone_UITextAutocorrectionType.classInitialized) __INIT_org_xmlvm_iphone_UITextAutocorrectionType();
    return _STATIC_org_xmlvm_iphone_UITextAutocorrectionType_No;
}

void org_xmlvm_iphone_UITextAutocorrectionType_PUT_No(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UITextAutocorrectionType.classInitialized) __INIT_org_xmlvm_iphone_UITextAutocorrectionType();
    _STATIC_org_xmlvm_iphone_UITextAutocorrectionType_No = v;
}

JAVA_INT org_xmlvm_iphone_UITextAutocorrectionType_GET_Yes()
{
    if (!__TIB_org_xmlvm_iphone_UITextAutocorrectionType.classInitialized) __INIT_org_xmlvm_iphone_UITextAutocorrectionType();
    return _STATIC_org_xmlvm_iphone_UITextAutocorrectionType_Yes;
}

void org_xmlvm_iphone_UITextAutocorrectionType_PUT_Yes(JAVA_INT v)
{
    if (!__TIB_org_xmlvm_iphone_UITextAutocorrectionType.classInitialized) __INIT_org_xmlvm_iphone_UITextAutocorrectionType();
    _STATIC_org_xmlvm_iphone_UITextAutocorrectionType_Yes = v;
}

void org_xmlvm_iphone_UITextAutocorrectionType___INIT___(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UITextAutocorrectionType___INIT___]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}


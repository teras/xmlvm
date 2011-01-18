#include "xmlvm.h"
#include "java_lang_String.h"

#include "org_xmlvm_iphone_NSBundle.h"

__TIB_DEFINITION_org_xmlvm_iphone_NSBundle __TIB_org_xmlvm_iphone_NSBundle = {
    0, // classInitialized
    "org.xmlvm.iphone.NSBundle", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_org_xmlvm_iphone_NSObject, // extends
    XMLVM_TYPE_CLASS};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSBundle;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSBundle_ARRAYTYPE;

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


#include "xmlvm-reflection.h"

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
};

static XMLVM_CONSTRUCTOR_REFLECTION_DATA __constructor_reflection_data[] = {
};

static JAVA_OBJECT constructor_dispatcher(JAVA_OBJECT constructor, JAVA_OBJECT arguments)
{
    JAVA_OBJECT obj = __NEW_org_xmlvm_iphone_NSBundle();
    java_lang_reflect_Constructor* c = (java_lang_reflect_Constructor*) constructor;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    switch (c->fields.java_lang_reflect_Constructor.slot_) {
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return obj;
}

void __INIT_org_xmlvm_iphone_NSBundle()
{
    __TIB_org_xmlvm_iphone_NSBundle.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_org_xmlvm_iphone_NSObject.classInitialized) __INIT_org_xmlvm_iphone_NSObject();
    __TIB_org_xmlvm_iphone_NSBundle.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_NSBundle;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_NSBundle.vtable, __TIB_org_xmlvm_iphone_NSObject.vtable, sizeof(__TIB_org_xmlvm_iphone_NSObject.vtable));
    // Initialize vtable for this class
    __TIB_org_xmlvm_iphone_NSBundle.vtable[14] = (VTABLE_PTR) &org_xmlvm_iphone_NSBundle_pathForResource___java_lang_String_java_lang_String_java_lang_String;
    __TIB_org_xmlvm_iphone_NSBundle.vtable[15] = (VTABLE_PTR) &org_xmlvm_iphone_NSBundle_pathForResource___java_lang_String_java_lang_String;
    __TIB_org_xmlvm_iphone_NSBundle.vtable[16] = (VTABLE_PTR) &org_xmlvm_iphone_NSBundle_bundlePath__;
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_NSBundle.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_NSBundle.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);

    __TIB_org_xmlvm_iphone_NSBundle.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_NSBundle.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_NSBundle.constructorDispatcherFunc = constructor_dispatcher;
    __TIB_org_xmlvm_iphone_NSBundle.declaredConstructors = &__constructor_reflection_data[0];
    __TIB_org_xmlvm_iphone_NSBundle.numDeclaredConstructors = sizeof(__constructor_reflection_data) / sizeof(XMLVM_CONSTRUCTOR_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_NSBundle = XMLVM_CREATE_CLASS_OBJECT(&__TIB_org_xmlvm_iphone_NSBundle);
    __TIB_org_xmlvm_iphone_NSBundle.clazz = __CLASS_org_xmlvm_iphone_NSBundle;
    __CLASS_org_xmlvm_iphone_NSBundle_ARRAYTYPE = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_NSBundle, 1);
    org_xmlvm_iphone_NSBundle___CLINIT_();
    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_NSBundle]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_NSBundle(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_NSBundle]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_NSBundle()
{
    if (!__TIB_org_xmlvm_iphone_NSBundle.classInitialized) __INIT_org_xmlvm_iphone_NSBundle();
    org_xmlvm_iphone_NSBundle* me = (org_xmlvm_iphone_NSBundle*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_NSBundle));
    me->tib = &__TIB_org_xmlvm_iphone_NSBundle;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_NSBundle]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSBundle()
{
    JAVA_OBJECT me = JAVA_NULL;
    return me;
}

JAVA_OBJECT org_xmlvm_iphone_NSBundle_mainBundle__()
{
    if (!__TIB_org_xmlvm_iphone_NSBundle.classInitialized) __INIT_org_xmlvm_iphone_NSBundle();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSBundle_mainBundle__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSBundle_pathForResource___java_lang_String_java_lang_String_java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSBundle_pathForResource___java_lang_String_java_lang_String_java_lang_String]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSBundle_pathForResource___java_lang_String_java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSBundle_pathForResource___java_lang_String_java_lang_String]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_NSBundle_bundlePath__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSBundle_bundlePath__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_NSBundle___CLINIT_()
{
    if (!__TIB_org_xmlvm_iphone_NSBundle.classInitialized) __INIT_org_xmlvm_iphone_NSBundle();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_NSBundle___CLINIT___]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}



#include "org_xmlvm_iphone_UINavigationControllerDelegate.h"

__TIB_DEFINITION_org_xmlvm_iphone_UINavigationControllerDelegate __TIB_org_xmlvm_iphone_UINavigationControllerDelegate;

JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationControllerDelegate;
//TODO _ARRAYTYPE not initialized
JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationControllerDelegate_ARRAYTYPE;


static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
};

void __INIT_org_xmlvm_iphone_UINavigationControllerDelegate(__TIB_DEFINITION_TEMPLATE** interface)
{
    if (!__TIB_org_xmlvm_iphone_UINavigationControllerDelegate.classInitialized) {
        __TIB_org_xmlvm_iphone_UINavigationControllerDelegate.className = "org.xmlvm.iphone.UINavigationControllerDelegate";
        __TIB_org_xmlvm_iphone_UINavigationControllerDelegate.extends = (__TIB_DEFINITION_TEMPLATE*) &__TIB_java_lang_Object;
        __TIB_org_xmlvm_iphone_UINavigationControllerDelegate.numInterfaces = 0;
        __TIB_org_xmlvm_iphone_UINavigationControllerDelegate.classInitialized = 1;
    }
    if (interface != JAVA_NULL) {
        *interface = (__TIB_DEFINITION_TEMPLATE*) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_org_xmlvm_iphone_UINavigationControllerDelegate));
        XMLVM_MEMCPY(*interface, &__TIB_org_xmlvm_iphone_UINavigationControllerDelegate, sizeof(__TIB_DEFINITION_org_xmlvm_iphone_UINavigationControllerDelegate));    __TIB_org_xmlvm_iphone_UINavigationControllerDelegate.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_UINavigationControllerDelegate.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);

    __CLASS_org_xmlvm_iphone_UINavigationControllerDelegate = __NEW_XMLVMClass(&__TIB_org_xmlvm_iphone_UINavigationControllerDelegate);
    __TIB_org_xmlvm_iphone_UINavigationControllerDelegate.clazz = __CLASS_org_xmlvm_iphone_UINavigationControllerDelegate;
    }
}


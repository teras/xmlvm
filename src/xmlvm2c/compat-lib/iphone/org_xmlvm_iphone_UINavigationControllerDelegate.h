#ifndef __ORG_XMLVM_IPHONE_UINAVIGATIONCONTROLLERDELEGATE__
#define __ORG_XMLVM_IPHONE_UINAVIGATIONCONTROLLERDELEGATE__

#include "xmlvm.h"
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif

XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UINavigationControllerDelegate, 13)

#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationControllerDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationControllerDelegate
typedef struct org_xmlvm_iphone_UINavigationControllerDelegate org_xmlvm_iphone_UINavigationControllerDelegate;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UINavigationControllerDelegate 13
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationControllerDelegate_willShowViewController___org_xmlvm_iphone_UINavigationController_org_xmlvm_iphone_UIViewController_boolean 11
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationControllerDelegate_didShowViewController___org_xmlvm_iphone_UINavigationController_org_xmlvm_iphone_UIViewController_boolean 12

void __INIT_org_xmlvm_iphone_UINavigationControllerDelegate(__TIB_DEFINITION_TEMPLATE** interface);

#endif

#ifndef __ORG_XMLVM_IPHONE_SKPRODUCT__
#define __ORG_XMLVM_IPHONE_SKPRODUCT__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSLocale
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSLocale
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSLocale)
#endif
// Class declarations for org.xmlvm.iphone.SKProduct
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_SKProduct, 7, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_SKProduct)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_SKProduct;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_SKProduct_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_SKProduct_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_SKProduct_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_SKProduct
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_SKProduct \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_SKProduct \
    } org_xmlvm_iphone_SKProduct

struct org_xmlvm_iphone_SKProduct {
    __TIB_DEFINITION_org_xmlvm_iphone_SKProduct* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_SKProduct;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_SKProduct
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_SKProduct
typedef struct org_xmlvm_iphone_SKProduct org_xmlvm_iphone_SKProduct;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_SKProduct 7

void __INIT_org_xmlvm_iphone_SKProduct();
void __INIT_IMPL_org_xmlvm_iphone_SKProduct();
void __DELETE_org_xmlvm_iphone_SKProduct(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_SKProduct(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_SKProduct();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_SKProduct();
JAVA_OBJECT org_xmlvm_iphone_SKProduct_getLocalizedDescription__(JAVA_OBJECT me);
JAVA_OBJECT org_xmlvm_iphone_SKProduct_getLocalizedTitle__(JAVA_OBJECT me);
JAVA_DOUBLE org_xmlvm_iphone_SKProduct_getPrice__(JAVA_OBJECT me);
JAVA_OBJECT org_xmlvm_iphone_SKProduct_getPriceLocale__(JAVA_OBJECT me);
JAVA_OBJECT org_xmlvm_iphone_SKProduct_getProductIdentifier__(JAVA_OBJECT me);

// Define a Macro for the method declarations of the Obj-C wrapper class so that subclass wrappers may easily include these too
#define XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_SKProduct \
XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_NSObject \

// Define a Macro for the entire contents of the Obj-C wrapper class
#define XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_SKProduct \
XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_NSObject \


#endif

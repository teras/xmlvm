#ifndef __ORG_XMLVM_IPHONE_NSNUMBERFORMATTERSTYLE__
#define __ORG_XMLVM_IPHONE_NSNUMBERFORMATTERSTYLE__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "java_lang_Object.h"

// Circular references:
// Class declarations for org.xmlvm.iphone.NSNumberFormatterStyle
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_NSNumberFormatterStyle, 6, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_NSNumberFormatterStyle)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSNumberFormatterStyle;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSNumberFormatterStyle_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSNumberFormatterStyle_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSNumberFormatterStyle_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSNumberFormatterStyle
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_NSNumberFormatterStyle \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSNumberFormatterStyle \
    } org_xmlvm_iphone_NSNumberFormatterStyle

struct org_xmlvm_iphone_NSNumberFormatterStyle {
    __TIB_DEFINITION_org_xmlvm_iphone_NSNumberFormatterStyle* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_NSNumberFormatterStyle;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSNumberFormatterStyle
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSNumberFormatterStyle
typedef struct org_xmlvm_iphone_NSNumberFormatterStyle org_xmlvm_iphone_NSNumberFormatterStyle;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_NSNumberFormatterStyle 6

void __INIT_org_xmlvm_iphone_NSNumberFormatterStyle();
void __INIT_IMPL_org_xmlvm_iphone_NSNumberFormatterStyle();
void __DELETE_org_xmlvm_iphone_NSNumberFormatterStyle(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_NSNumberFormatterStyle(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_NSNumberFormatterStyle();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSNumberFormatterStyle();
JAVA_INT org_xmlvm_iphone_NSNumberFormatterStyle_GET_NoStyle();
void org_xmlvm_iphone_NSNumberFormatterStyle_PUT_NoStyle(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_NSNumberFormatterStyle_GET_DecimalStyle();
void org_xmlvm_iphone_NSNumberFormatterStyle_PUT_DecimalStyle(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_NSNumberFormatterStyle_GET_CurrencyStyle();
void org_xmlvm_iphone_NSNumberFormatterStyle_PUT_CurrencyStyle(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_NSNumberFormatterStyle_GET_PercentStyle();
void org_xmlvm_iphone_NSNumberFormatterStyle_PUT_PercentStyle(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_NSNumberFormatterStyle_GET_ScientificStyle();
void org_xmlvm_iphone_NSNumberFormatterStyle_PUT_ScientificStyle(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_NSNumberFormatterStyle_GET_SpellOutStyle();
void org_xmlvm_iphone_NSNumberFormatterStyle_PUT_SpellOutStyle(JAVA_INT v);

// Define a Macro for the method declarations of the Obj-C wrapper class so that subclass wrappers may easily include these too
#define XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_NSNumberFormatterStyle \

// Define a Macro for the entire contents of the Obj-C wrapper class
#define XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_NSNumberFormatterStyle \


#endif

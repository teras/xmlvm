#ifndef __ORG_XMLVM_IPHONE_UILINEBREAKMODE__
#define __ORG_XMLVM_IPHONE_UILINEBREAKMODE__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "java_lang_Object.h"

// Circular references:
// Class declarations for org.xmlvm.iphone.UILineBreakMode
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UILineBreakMode, 6, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UILineBreakMode)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UILineBreakMode;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UILineBreakMode_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UILineBreakMode_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UILineBreakMode_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UILineBreakMode
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UILineBreakMode \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UILineBreakMode \
    } org_xmlvm_iphone_UILineBreakMode

struct org_xmlvm_iphone_UILineBreakMode {
    __TIB_DEFINITION_org_xmlvm_iphone_UILineBreakMode* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UILineBreakMode;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UILineBreakMode
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UILineBreakMode
typedef struct org_xmlvm_iphone_UILineBreakMode org_xmlvm_iphone_UILineBreakMode;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UILineBreakMode 6

void __INIT_org_xmlvm_iphone_UILineBreakMode();
void __INIT_IMPL_org_xmlvm_iphone_UILineBreakMode();
void __DELETE_org_xmlvm_iphone_UILineBreakMode(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UILineBreakMode(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UILineBreakMode();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UILineBreakMode();
JAVA_INT org_xmlvm_iphone_UILineBreakMode_GET_WordWrap();
void org_xmlvm_iphone_UILineBreakMode_PUT_WordWrap(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UILineBreakMode_GET_CharacterWrap();
void org_xmlvm_iphone_UILineBreakMode_PUT_CharacterWrap(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UILineBreakMode_GET_HeadTruncation();
void org_xmlvm_iphone_UILineBreakMode_PUT_HeadTruncation(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UILineBreakMode_GET_Clip();
void org_xmlvm_iphone_UILineBreakMode_PUT_Clip(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UILineBreakMode_GET_TailTruncation();
void org_xmlvm_iphone_UILineBreakMode_PUT_TailTruncation(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UILineBreakMode_GET_MiddleTruncation();
void org_xmlvm_iphone_UILineBreakMode_PUT_MiddleTruncation(JAVA_INT v);

// Define a Macro for the method declarations of the Obj-C wrapper class so that subclass wrappers may easily include these too
#define XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_UILineBreakMode \

// Define a Macro for the entire contents of the Obj-C wrapper class
#define XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_UILineBreakMode \


#endif

#ifndef __ORG_XMLVM_IPHONE_UICOLOR__
#define __ORG_XMLVM_IPHONE_UICOLOR__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGColor
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGColor
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGColor)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIImage
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIImage
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIImage)
#endif
// Class declarations for org.xmlvm.iphone.UIColor
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UIColor, 7, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UIColor)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIColor;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIColor_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIColor_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIColor_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIColor

void org_xmlvm_iphone_UIColor_INTERNAL_CONSTRUCTOR(JAVA_OBJECT me, NSObject* wrappedObj);
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UIColor \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIColor \
    } org_xmlvm_iphone_UIColor

struct org_xmlvm_iphone_UIColor {
    __TIB_DEFINITION_org_xmlvm_iphone_UIColor* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UIColor;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIColor
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIColor
typedef struct org_xmlvm_iphone_UIColor org_xmlvm_iphone_UIColor;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UIColor 7

void __INIT_org_xmlvm_iphone_UIColor();
void __INIT_IMPL_org_xmlvm_iphone_UIColor();
void __DELETE_org_xmlvm_iphone_UIColor(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UIColor(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UIColor();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIColor();
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_blackColor();
void org_xmlvm_iphone_UIColor_PUT_blackColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_darkGrayColor();
void org_xmlvm_iphone_UIColor_PUT_darkGrayColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_lightGrayColor();
void org_xmlvm_iphone_UIColor_PUT_lightGrayColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_whiteColor();
void org_xmlvm_iphone_UIColor_PUT_whiteColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_grayColor();
void org_xmlvm_iphone_UIColor_PUT_grayColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_redColor();
void org_xmlvm_iphone_UIColor_PUT_redColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_greenColor();
void org_xmlvm_iphone_UIColor_PUT_greenColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_blueColor();
void org_xmlvm_iphone_UIColor_PUT_blueColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_cyanColor();
void org_xmlvm_iphone_UIColor_PUT_cyanColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_yellowColor();
void org_xmlvm_iphone_UIColor_PUT_yellowColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_magentaColor();
void org_xmlvm_iphone_UIColor_PUT_magentaColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_orangeColor();
void org_xmlvm_iphone_UIColor_PUT_orangeColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_purpleColor();
void org_xmlvm_iphone_UIColor_PUT_purpleColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_brownColor();
void org_xmlvm_iphone_UIColor_PUT_brownColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_clearColor();
void org_xmlvm_iphone_UIColor_PUT_clearColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_lightTextColor();
void org_xmlvm_iphone_UIColor_PUT_lightTextColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_darkTextColor();
void org_xmlvm_iphone_UIColor_PUT_darkTextColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_groupTableViewBackgroundColor();
void org_xmlvm_iphone_UIColor_PUT_groupTableViewBackgroundColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_GET_viewFlipsideBackgroundColor();
void org_xmlvm_iphone_UIColor_PUT_viewFlipsideBackgroundColor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_UIColor_colorWithWhiteAlpha___float_float(JAVA_FLOAT n1, JAVA_FLOAT n2);
JAVA_OBJECT org_xmlvm_iphone_UIColor_colorWithHSBA___float_float_float_float(JAVA_FLOAT n1, JAVA_FLOAT n2, JAVA_FLOAT n3, JAVA_FLOAT n4);
JAVA_OBJECT org_xmlvm_iphone_UIColor_colorWithRGBA___float_float_float_float(JAVA_FLOAT n1, JAVA_FLOAT n2, JAVA_FLOAT n3, JAVA_FLOAT n4);
JAVA_OBJECT org_xmlvm_iphone_UIColor_colorWithPatternImage___org_xmlvm_iphone_UIImage(JAVA_OBJECT n1);
JAVA_OBJECT org_xmlvm_iphone_UIColor_getCGColor__(JAVA_OBJECT me);
void org_xmlvm_iphone_UIColor_set__(JAVA_OBJECT me);
void org_xmlvm_iphone_UIColor___CLINIT_();

// Define a Macro for the method declarations of the Obj-C wrapper class so that subclass wrappers may easily include these too
#define XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_UIColor \
XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_NSObject \

// Define a Macro for the entire contents of the Obj-C wrapper class
#define XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_UIColor \
XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_NSObject \


#endif

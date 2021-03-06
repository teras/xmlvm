#ifndef __ORG_XMLVM_IPHONE_MPMOVIECONTROLMODE__
#define __ORG_XMLVM_IPHONE_MPMOVIECONTROLMODE__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
// Class declarations for org.xmlvm.iphone.MPMovieControlMode
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_MPMovieControlMode, 7, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_MPMovieControlMode)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MPMovieControlMode;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MPMovieControlMode_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MPMovieControlMode_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MPMovieControlMode_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_MPMovieControlMode
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_MPMovieControlMode \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_MPMovieControlMode \
    } org_xmlvm_iphone_MPMovieControlMode

struct org_xmlvm_iphone_MPMovieControlMode {
    __TIB_DEFINITION_org_xmlvm_iphone_MPMovieControlMode* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_MPMovieControlMode;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MPMovieControlMode
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MPMovieControlMode
typedef struct org_xmlvm_iphone_MPMovieControlMode org_xmlvm_iphone_MPMovieControlMode;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_MPMovieControlMode 7

void __INIT_org_xmlvm_iphone_MPMovieControlMode();
void __INIT_IMPL_org_xmlvm_iphone_MPMovieControlMode();
void __DELETE_org_xmlvm_iphone_MPMovieControlMode(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_MPMovieControlMode(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_MPMovieControlMode();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_MPMovieControlMode();
JAVA_INT org_xmlvm_iphone_MPMovieControlMode_GET_Default();
void org_xmlvm_iphone_MPMovieControlMode_PUT_Default(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_MPMovieControlMode_GET_VolumeOnly();
void org_xmlvm_iphone_MPMovieControlMode_PUT_VolumeOnly(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_MPMovieControlMode_GET_Hidden();
void org_xmlvm_iphone_MPMovieControlMode_PUT_Hidden(JAVA_INT v);

// Define a Macro for the method declarations of the Obj-C wrapper class so that subclass wrappers may easily include these too
#define XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_MPMovieControlMode \
XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_NSObject \

// Define a Macro for the entire contents of the Obj-C wrapper class
#define XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_MPMovieControlMode \
XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_NSObject \


#endif

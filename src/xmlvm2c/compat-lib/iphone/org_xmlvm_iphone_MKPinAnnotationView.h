#ifndef __ORG_XMLVM_IPHONE_MKPINANNOTATIONVIEW__
#define __ORG_XMLVM_IPHONE_MKPINANNOTATIONVIEW__

#include "xmlvm.h"
#include "org_xmlvm_iphone_MKAnnotationView.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKAnnotationView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKAnnotationView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_MKAnnotationView)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKAnnotation
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKAnnotation
XMLVM_FORWARD_DECL(org_xmlvm_iphone_MKAnnotation)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
// Class declarations for org.xmlvm.iphone.MKPinAnnotationView
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_MKPinAnnotationView, 102)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKPinAnnotationView;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKPinAnnotationView_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_MKPinAnnotationView
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_MKPinAnnotationView \
    __INSTANCE_FIELDS_org_xmlvm_iphone_MKAnnotationView; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_MKPinAnnotationView \
    } org_xmlvm_iphone_MKPinAnnotationView

struct org_xmlvm_iphone_MKPinAnnotationView {
    __TIB_DEFINITION_org_xmlvm_iphone_MKPinAnnotationView* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_MKPinAnnotationView;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKPinAnnotationView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKPinAnnotationView
typedef struct org_xmlvm_iphone_MKPinAnnotationView org_xmlvm_iphone_MKPinAnnotationView;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_MKPinAnnotationView 102
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKPinAnnotationView_isAnimatesDrop__ 98
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKPinAnnotationView_setAnimatesDrop___boolean 99
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKPinAnnotationView_getPinColor__ 100
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKPinAnnotationView_setPinColor___int 101

void __INIT_org_xmlvm_iphone_MKPinAnnotationView();
void __DELETE_org_xmlvm_iphone_MKPinAnnotationView(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_MKPinAnnotationView(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_MKPinAnnotationView();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_MKPinAnnotationView();
void org_xmlvm_iphone_MKPinAnnotationView___INIT____org_xmlvm_iphone_MKAnnotation_java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 98
JAVA_BOOLEAN org_xmlvm_iphone_MKPinAnnotationView_isAnimatesDrop__(JAVA_OBJECT me);
// Vtable index: 99
void org_xmlvm_iphone_MKPinAnnotationView_setAnimatesDrop___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 100
JAVA_INT org_xmlvm_iphone_MKPinAnnotationView_getPinColor__(JAVA_OBJECT me);
// Vtable index: 101
void org_xmlvm_iphone_MKPinAnnotationView_setPinColor___int(JAVA_OBJECT me, JAVA_INT n1);

#endif

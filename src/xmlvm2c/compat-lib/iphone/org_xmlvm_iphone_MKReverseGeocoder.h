#ifndef __ORG_XMLVM_IPHONE_MKREVERSEGEOCODER__
#define __ORG_XMLVM_IPHONE_MKREVERSEGEOCODER__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKReverseGeocoderDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKReverseGeocoderDelegate
XMLVM_FORWARD_DECL(org_xmlvm_iphone_MKReverseGeocoderDelegate)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CLLocationCoordinate2D
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CLLocationCoordinate2D
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CLLocationCoordinate2D)
#endif
// Class declarations for org.xmlvm.iphone.MKReverseGeocoder
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_MKReverseGeocoder, 16, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_MKReverseGeocoder)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKReverseGeocoder;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKReverseGeocoder_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKReverseGeocoder_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKReverseGeocoder_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_MKReverseGeocoder
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_MKReverseGeocoder \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_MKReverseGeocoder \
    } org_xmlvm_iphone_MKReverseGeocoder

struct org_xmlvm_iphone_MKReverseGeocoder {
    __TIB_DEFINITION_org_xmlvm_iphone_MKReverseGeocoder* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_MKReverseGeocoder;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKReverseGeocoder
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKReverseGeocoder
typedef struct org_xmlvm_iphone_MKReverseGeocoder org_xmlvm_iphone_MKReverseGeocoder;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_MKReverseGeocoder 16
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKReverseGeocoder_getCoordinate__ 9
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKReverseGeocoder_getPlacemark__ 10
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKReverseGeocoder_isQuerying__ 11
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKReverseGeocoder_getDelegate__ 12
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKReverseGeocoder_setDelegate___org_xmlvm_iphone_MKReverseGeocoderDelegate 13
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKReverseGeocoder_start__ 14
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKReverseGeocoder_cancel__ 15

void __INIT_org_xmlvm_iphone_MKReverseGeocoder();
void __INIT_IMPL_org_xmlvm_iphone_MKReverseGeocoder();
void __DELETE_org_xmlvm_iphone_MKReverseGeocoder(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_MKReverseGeocoder(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_MKReverseGeocoder();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_MKReverseGeocoder();
void org_xmlvm_iphone_MKReverseGeocoder___INIT____org_xmlvm_iphone_CLLocationCoordinate2D(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 9
JAVA_OBJECT org_xmlvm_iphone_MKReverseGeocoder_getCoordinate__(JAVA_OBJECT me);
// Vtable index: 10
JAVA_OBJECT org_xmlvm_iphone_MKReverseGeocoder_getPlacemark__(JAVA_OBJECT me);
// Vtable index: 11
JAVA_BOOLEAN org_xmlvm_iphone_MKReverseGeocoder_isQuerying__(JAVA_OBJECT me);
// Vtable index: 12
JAVA_OBJECT org_xmlvm_iphone_MKReverseGeocoder_getDelegate__(JAVA_OBJECT me);
// Vtable index: 13
void org_xmlvm_iphone_MKReverseGeocoder_setDelegate___org_xmlvm_iphone_MKReverseGeocoderDelegate(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 14
void org_xmlvm_iphone_MKReverseGeocoder_start__(JAVA_OBJECT me);
// Vtable index: 15
void org_xmlvm_iphone_MKReverseGeocoder_cancel__(JAVA_OBJECT me);

#endif

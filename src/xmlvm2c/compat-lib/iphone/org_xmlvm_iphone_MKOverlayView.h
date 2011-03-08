#ifndef __ORG_XMLVM_IPHONE_MKOVERLAYVIEW__
#define __ORG_XMLVM_IPHONE_MKOVERLAYVIEW__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKMapPoint
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKMapPoint
XMLVM_FORWARD_DECL(org_xmlvm_iphone_MKMapPoint)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGPoint
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGPoint
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGPoint)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKMapRect
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKMapRect
XMLVM_FORWARD_DECL(org_xmlvm_iphone_MKMapRect)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKOverlay
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKOverlay
XMLVM_FORWARD_DECL(org_xmlvm_iphone_MKOverlay)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGRect)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGContext
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGContext
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGContext)
#endif
// Class declarations for org.xmlvm.iphone.MKOverlayView
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_MKOverlayView, 23)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKOverlayView;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKOverlayView_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_MKOverlayView
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_MKOverlayView \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_MKOverlayView \
    } org_xmlvm_iphone_MKOverlayView

struct org_xmlvm_iphone_MKOverlayView {
    __TIB_DEFINITION_org_xmlvm_iphone_MKOverlayView* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_MKOverlayView;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKOverlayView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKOverlayView
typedef struct org_xmlvm_iphone_MKOverlayView org_xmlvm_iphone_MKOverlayView;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_MKOverlayView 23
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKOverlayView_getOverlay__ 14
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKOverlayView_pointForMapPoint___org_xmlvm_iphone_MKMapPoint 15
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKOverlayView_mapPointForPoint___org_xmlvm_iphone_CGPoint 16
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKOverlayView_rectForMapRect___org_xmlvm_iphone_MKMapRect 17
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKOverlayView_mapRectForRect___org_xmlvm_iphone_CGRect 18
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKOverlayView_canDrawMapRect___org_xmlvm_iphone_MKMapRect_float 19
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKOverlayView_drawMapRect___org_xmlvm_iphone_MKMapRect_float_org_xmlvm_iphone_CGContext 20
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKOverlayView_setNeedsDisplayInMapRect___org_xmlvm_iphone_MKMapRect 21
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKOverlayView_setNeedsDisplayInMapRect___org_xmlvm_iphone_MKMapRect_float 22

void __INIT_org_xmlvm_iphone_MKOverlayView();
void __DELETE_org_xmlvm_iphone_MKOverlayView(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_MKOverlayView(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_MKOverlayView();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_MKOverlayView();
void org_xmlvm_iphone_MKOverlayView___INIT____org_xmlvm_iphone_MKOverlay(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 14
JAVA_OBJECT org_xmlvm_iphone_MKOverlayView_getOverlay__(JAVA_OBJECT me);
// Vtable index: 15
JAVA_OBJECT org_xmlvm_iphone_MKOverlayView_pointForMapPoint___org_xmlvm_iphone_MKMapPoint(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 16
JAVA_OBJECT org_xmlvm_iphone_MKOverlayView_mapPointForPoint___org_xmlvm_iphone_CGPoint(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 17
JAVA_OBJECT org_xmlvm_iphone_MKOverlayView_rectForMapRect___org_xmlvm_iphone_MKMapRect(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 18
JAVA_OBJECT org_xmlvm_iphone_MKOverlayView_mapRectForRect___org_xmlvm_iphone_CGRect(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 19
JAVA_BOOLEAN org_xmlvm_iphone_MKOverlayView_canDrawMapRect___org_xmlvm_iphone_MKMapRect_float(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_FLOAT n2);
// Vtable index: 20
void org_xmlvm_iphone_MKOverlayView_drawMapRect___org_xmlvm_iphone_MKMapRect_float_org_xmlvm_iphone_CGContext(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_FLOAT n2, JAVA_OBJECT n3);
// Vtable index: 21
void org_xmlvm_iphone_MKOverlayView_setNeedsDisplayInMapRect___org_xmlvm_iphone_MKMapRect(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 22
void org_xmlvm_iphone_MKOverlayView_setNeedsDisplayInMapRect___org_xmlvm_iphone_MKMapRect_float(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_FLOAT n2);

#endif

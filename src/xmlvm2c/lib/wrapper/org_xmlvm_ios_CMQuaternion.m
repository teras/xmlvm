
//XMLVM_BEGIN_IMPLEMENTATION
CMQuaternion toCMQuaternion(void *obj)
{
    org_xmlvm_ios_CMQuaternion* objCObj = obj;
    CMQuaternion toRet;
    toRet.w = objCObj->fields.org_xmlvm_ios_CMQuaternion.w_;
    toRet.z = objCObj->fields.org_xmlvm_ios_CMQuaternion.z_;
    toRet.y = objCObj->fields.org_xmlvm_ios_CMQuaternion.y_;
    toRet.x = objCObj->fields.org_xmlvm_ios_CMQuaternion.x_;
    return toRet;
}
JAVA_OBJECT fromCMQuaternion(CMQuaternion obj)
{
    org_xmlvm_ios_CMQuaternion* jObj = __NEW_org_xmlvm_ios_CMQuaternion();
    org_xmlvm_ios_CMQuaternion___INIT___(jObj);
    jObj->fields.org_xmlvm_ios_CMQuaternion.w_ = obj.w;
    jObj->fields.org_xmlvm_ios_CMQuaternion.z_ = obj.z;
    jObj->fields.org_xmlvm_ios_CMQuaternion.y_ = obj.y;
    jObj->fields.org_xmlvm_ios_CMQuaternion.x_ = obj.x;
    return jObj;
}
//XMLVM_END_IMPLEMENTATION

//XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_ios_CMQuaternion]
//XMLVM_END_WRAPPER

//XMLVM_BEGIN_WRAPPER[org_xmlvm_ios_CMQuaternion___INIT___]
//XMLVM_END_WRAPPER

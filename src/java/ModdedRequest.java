/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.4
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class ModdedRequest {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  public ModdedRequest(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  public static long getCPtr(ModdedRequest obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        libjavawebserver_frameworkJNI.delete_ModdedRequest(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setPp(SWIGTYPE_p_MHD_PostProcessor value) {
    libjavawebserver_frameworkJNI.ModdedRequest_pp_set(swigCPtr, this, SWIGTYPE_p_MHD_PostProcessor.getCPtr(value));
  }

  public SWIGTYPE_p_MHD_PostProcessor getPp() {
    long cPtr = libjavawebserver_frameworkJNI.ModdedRequest_pp_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_MHD_PostProcessor(cPtr, false);
  }

  public void setCompleteUri(SWIGTYPE_p_std__string value) {
    libjavawebserver_frameworkJNI.ModdedRequest_completeUri_set(swigCPtr, this, SWIGTYPE_p_std__string.getCPtr(value));
  }

  public SWIGTYPE_p_std__string getCompleteUri() {
    long cPtr = libjavawebserver_frameworkJNI.ModdedRequest_completeUri_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_std__string(cPtr, false);
  }

  public void setDhr(HttpRequest value) {
    libjavawebserver_frameworkJNI.ModdedRequest_dhr_set(swigCPtr, this, HttpRequest.getCPtr(value), value);
  }

  public HttpRequest getDhr() {
    long cPtr = libjavawebserver_frameworkJNI.ModdedRequest_dhr_get(swigCPtr, this);
    return (cPtr == 0) ? null : new HttpRequest(cPtr, false);
  }

  public void setSecond(boolean value) {
    libjavawebserver_frameworkJNI.ModdedRequest_second_set(swigCPtr, this, value);
  }

  public boolean getSecond() {
    return libjavawebserver_frameworkJNI.ModdedRequest_second_get(swigCPtr, this);
  }

  public ModdedRequest() {
    this(libjavawebserver_frameworkJNI.new_ModdedRequest(), true);
  }

}
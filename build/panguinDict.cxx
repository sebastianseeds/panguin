// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME panguinDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/work/halla/sbs/seeds/panguin/include/panguinOnlineConfig.hh"
#include "/work/halla/sbs/seeds/panguin/include/panguinOnline.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *OnlineConfig_Dictionary();
   static void OnlineConfig_TClassManip(TClass*);
   static void *new_OnlineConfig(void *p = 0);
   static void *newArray_OnlineConfig(Long_t size, void *p);
   static void delete_OnlineConfig(void *p);
   static void deleteArray_OnlineConfig(void *p);
   static void destruct_OnlineConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::OnlineConfig*)
   {
      ::OnlineConfig *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::OnlineConfig));
      static ::ROOT::TGenericClassInfo 
         instance("OnlineConfig", "panguinOnlineConfig.hh", 12,
                  typeid(::OnlineConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &OnlineConfig_Dictionary, isa_proxy, 4,
                  sizeof(::OnlineConfig) );
      instance.SetNew(&new_OnlineConfig);
      instance.SetNewArray(&newArray_OnlineConfig);
      instance.SetDelete(&delete_OnlineConfig);
      instance.SetDeleteArray(&deleteArray_OnlineConfig);
      instance.SetDestructor(&destruct_OnlineConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::OnlineConfig*)
   {
      return GenerateInitInstanceLocal((::OnlineConfig*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::OnlineConfig*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *OnlineConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::OnlineConfig*)0x0)->GetClass();
      OnlineConfig_TClassManip(theClass);
   return theClass;
   }

   static void OnlineConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_OnlineGUI(void *p);
   static void deleteArray_OnlineGUI(void *p);
   static void destruct_OnlineGUI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::OnlineGUI*)
   {
      ::OnlineGUI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::OnlineGUI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("OnlineGUI", ::OnlineGUI::Class_Version(), "panguinOnline.hh", 27,
                  typeid(::OnlineGUI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::OnlineGUI::Dictionary, isa_proxy, 4,
                  sizeof(::OnlineGUI) );
      instance.SetDelete(&delete_OnlineGUI);
      instance.SetDeleteArray(&deleteArray_OnlineGUI);
      instance.SetDestructor(&destruct_OnlineGUI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::OnlineGUI*)
   {
      return GenerateInitInstanceLocal((::OnlineGUI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::OnlineGUI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr OnlineGUI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *OnlineGUI::Class_Name()
{
   return "OnlineGUI";
}

//______________________________________________________________________________
const char *OnlineGUI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OnlineGUI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int OnlineGUI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OnlineGUI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *OnlineGUI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OnlineGUI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *OnlineGUI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OnlineGUI*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_OnlineConfig(void *p) {
      return  p ? new(p) ::OnlineConfig : new ::OnlineConfig;
   }
   static void *newArray_OnlineConfig(Long_t nElements, void *p) {
      return p ? new(p) ::OnlineConfig[nElements] : new ::OnlineConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_OnlineConfig(void *p) {
      delete ((::OnlineConfig*)p);
   }
   static void deleteArray_OnlineConfig(void *p) {
      delete [] ((::OnlineConfig*)p);
   }
   static void destruct_OnlineConfig(void *p) {
      typedef ::OnlineConfig current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::OnlineConfig

//______________________________________________________________________________
void OnlineGUI::Streamer(TBuffer &R__b)
{
   // Stream an object of class OnlineGUI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(OnlineGUI::Class(),this);
   } else {
      R__b.WriteClassBuffer(OnlineGUI::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_OnlineGUI(void *p) {
      delete ((::OnlineGUI*)p);
   }
   static void deleteArray_OnlineGUI(void *p) {
      delete [] ((::OnlineGUI*)p);
   }
   static void destruct_OnlineGUI(void *p) {
      typedef ::OnlineGUI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::OnlineGUI

namespace ROOT {
   static TClass *vectorlEvectorlETStringgRsPgR_Dictionary();
   static void vectorlEvectorlETStringgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETStringgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlETStringgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETStringgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETStringgRsPgR(void *p);
   static void destruct_vectorlEvectorlETStringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TString> >*)
   {
      vector<vector<TString> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TString> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TString> >", -2, "vector", 210,
                  typeid(vector<vector<TString> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETStringgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<TString> >) );
      instance.SetNew(&new_vectorlEvectorlETStringgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETStringgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETStringgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETStringgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETStringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TString> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<TString> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETStringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TString> >*)0x0)->GetClass();
      vectorlEvectorlETStringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETStringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETStringgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TString> > : new vector<vector<TString> >;
   }
   static void *newArray_vectorlEvectorlETStringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TString> >[nElements] : new vector<vector<TString> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETStringgRsPgR(void *p) {
      delete ((vector<vector<TString> >*)p);
   }
   static void deleteArray_vectorlEvectorlETStringgRsPgR(void *p) {
      delete [] ((vector<vector<TString> >*)p);
   }
   static void destruct_vectorlEvectorlETStringgRsPgR(void *p) {
      typedef vector<vector<TString> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TString> >

namespace ROOT {
   static TClass *vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR_Dictionary();
   static void vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p);
   static void destruct_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<unsigned int,unsigned int> >*)
   {
      vector<pair<unsigned int,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<unsigned int,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<unsigned int,unsigned int> >", -2, "vector", 210,
                  typeid(vector<pair<unsigned int,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<unsigned int,unsigned int> >) );
      instance.SetNew(&new_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<unsigned int,unsigned int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<pair<unsigned int,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<unsigned int,unsigned int> >*)0x0)->GetClass();
      vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<unsigned int,unsigned int> > : new vector<pair<unsigned int,unsigned int> >;
   }
   static void *newArray_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<unsigned int,unsigned int> >[nElements] : new vector<pair<unsigned int,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p) {
      delete ((vector<pair<unsigned int,unsigned int> >*)p);
   }
   static void deleteArray_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p) {
      delete [] ((vector<pair<unsigned int,unsigned int> >*)p);
   }
   static void destruct_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p) {
      typedef vector<pair<unsigned int,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<unsigned int,unsigned int> >

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = 0);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "vector", 210,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TString>*)0x0)->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete ((vector<TString>*)p);
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] ((vector<TString>*)p);
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace ROOT {
   static TClass *vectorlETCutgR_Dictionary();
   static void vectorlETCutgR_TClassManip(TClass*);
   static void *new_vectorlETCutgR(void *p = 0);
   static void *newArray_vectorlETCutgR(Long_t size, void *p);
   static void delete_vectorlETCutgR(void *p);
   static void deleteArray_vectorlETCutgR(void *p);
   static void destruct_vectorlETCutgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TCut>*)
   {
      vector<TCut> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TCut>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TCut>", -2, "vector", 210,
                  typeid(vector<TCut>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETCutgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TCut>) );
      instance.SetNew(&new_vectorlETCutgR);
      instance.SetNewArray(&newArray_vectorlETCutgR);
      instance.SetDelete(&delete_vectorlETCutgR);
      instance.SetDeleteArray(&deleteArray_vectorlETCutgR);
      instance.SetDestructor(&destruct_vectorlETCutgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TCut> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TCut>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETCutgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TCut>*)0x0)->GetClass();
      vectorlETCutgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETCutgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETCutgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TCut> : new vector<TCut>;
   }
   static void *newArray_vectorlETCutgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TCut>[nElements] : new vector<TCut>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETCutgR(void *p) {
      delete ((vector<TCut>*)p);
   }
   static void deleteArray_vectorlETCutgR(void *p) {
      delete [] ((vector<TCut>*)p);
   }
   static void destruct_vectorlETCutgR(void *p) {
      typedef vector<TCut> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TCut>

namespace {
  void TriggerDictionaryInitialization_libpanguin_Impl() {
    static const char* headers[] = {
"/work/halla/sbs/seeds/panguin/include/panguinOnlineConfig.hh",
"/work/halla/sbs/seeds/panguin/include/panguinOnline.hh",
0
    };
    static const char* includePaths[] = {
"/work/halla/sbs/seeds/panguin/build/include",
"/site/12gev_phys/2.3/Linux_CentOS7.7.1908-x86_64-gcc4.8.5/root/6.14.04/include",
"/work/halla/sbs/seeds/panguin/include",
"/u/site/12gev_phys/2.3/Linux_CentOS7.2.1511-x86_64-gcc4.8.5/root/6.14.04/include",
"/w/halla-scshelf2102/sbs/seeds/panguin/build/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libpanguin dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$/work/halla/sbs/seeds/panguin/include/panguinOnlineConfig.hh")))  OnlineConfig;
class __attribute__((annotate("$clingAutoload$/work/halla/sbs/seeds/panguin/include/panguinOnline.hh")))  OnlineGUI;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libpanguin dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/work/halla/sbs/seeds/panguin/include/panguinOnlineConfig.hh"
#include "/work/halla/sbs/seeds/panguin/include/panguinOnline.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"OnlineConfig", payloadCode, "@",
"OnlineGUI", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libpanguin",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libpanguin_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libpanguin_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libpanguin() {
  TriggerDictionaryInitialization_libpanguin_Impl();
}

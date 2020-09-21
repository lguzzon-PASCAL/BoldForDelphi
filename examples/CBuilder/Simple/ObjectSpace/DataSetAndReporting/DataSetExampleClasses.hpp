/*****************************************/
/*      This file is autogenerated       */
/*   Any manual changes will be LOST!    */
/*****************************************/
/* Generated 2001-12-18 09:26:07         */
/*****************************************/
/* This file should be stored in the     */
/* same directory as the form/datamodule */
/* with the corresponding model          */
/*****************************************/
/* Copyright notice:                     */
/*                                       */
/*****************************************/

#if !defined (DataSetExampleClasses_HPP)
#define DataSetExampleClasses_HPP

// interface uses

// interface dependancies

// attribute dependancies
#include "BoldAttributes.hpp"

#include <Classes.hpp>
#include <Controls.hpp>
#include <SysUtils.hpp>
#include "BoldDefs.hpp"
#include "BoldSubscription.hpp"
#include "BoldDeriver.hpp"
#include "BoldElements.hpp"
#include "BoldDomainElement.hpp"
#include "BoldSystemRT.hpp"
#include "BoldSystem.hpp"

void unregisterCode();

// forward declarations of all classes }

class TBusinessClassesRoot;
class TBusinessClassesRootList;
class TBuilding;
class TBuildingList;
class TPerson;
class TPersonList;

class DELPHICLASS TBusinessClassesRoot;
class TBusinessClassesRoot : public Boldsystem::TBoldObject
{
typedef Boldsystem::TBoldObject inherited;
private:
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TBusinessClassesRoot(Boldsystem::TBoldSystem* aBoldSystem) : Boldsystem::TBoldObject(aBoldSystem, true) { }
  #pragma option pop

};

class DELPHICLASS TBuilding;
class TBuilding : public TBusinessClassesRoot
{
typedef TBusinessClassesRoot inherited;
private:
  TBAInteger* __fastcall _Get_M_ZipCode();
  Integer __fastcall _GetZipCode();
  void __fastcall _SetZipCode(Integer NewValue);
  TBAString* __fastcall _Get_M_Address();
  String __fastcall _GetAddress();
  void __fastcall _SetAddress(String NewValue);
  TPersonList* __fastcall _GetResidents();
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TBuilding(Boldsystem::TBoldSystem* aBoldSystem) : TBusinessClassesRoot(aBoldSystem) { }
  #pragma option pop

  void __fastcall CompleteCreate(void);
  __property TBAInteger* M_ZipCode = {read=_Get_M_ZipCode};
  __property TBAString* M_Address = {read=_Get_M_Address};
  __property TPersonList* M_Residents = {read=_GetResidents};
  __property Integer ZipCode = {read=_GetZipCode, write=_SetZipCode};
  __property String Address = {read=_GetAddress, write=_SetAddress};
  __property TPersonList* Residents = {read=_GetResidents};
};

class DELPHICLASS TPerson;
class TPerson : public TBusinessClassesRoot
{
typedef TBusinessClassesRoot inherited;
private:
  TBAString* __fastcall _Get_M_FirstName();
  String __fastcall _GetFirstName();
  void __fastcall _SetFirstName(String NewValue);
  TBAString* __fastcall _Get_M_LastName();
  String __fastcall _GetLastName();
  void __fastcall _SetLastName(String NewValue);
  TBuilding* __fastcall _GetHome();
  TBoldObjectReference* __fastcall _Get_M_Home();
  void __fastcall _SetHome(TBuilding *value);
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TPerson(Boldsystem::TBoldSystem* aBoldSystem) : TBusinessClassesRoot(aBoldSystem) { }
  #pragma option pop

  void __fastcall CompleteCreate(void);
  __property TBAString* M_FirstName = {read=_Get_M_FirstName};
  __property TBAString* M_LastName = {read=_Get_M_LastName};
  __property TBoldObjectReference* M_Home = {read=_Get_M_Home};
  __property String FirstName = {read=_GetFirstName, write=_SetFirstName};
  __property String LastName = {read=_GetLastName, write=_SetLastName};
  __property TBuilding* Home = {read=_GetHome, write=_SetHome};
};

class DELPHICLASS TBusinessClassesRootList;
class TBusinessClassesRootList : public TBoldObjectList
{
protected:
  TBusinessClassesRoot* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TBusinessClassesRoot *NewObject);
public:
  int __fastcall Includes(TBusinessClassesRoot *anObject);
  int __fastcall IndexOf(TBusinessClassesRoot *anObject);
  void __fastcall Add(TBusinessClassesRoot *NewObject);
  TBusinessClassesRoot* __fastcall AddNew();
  void __fastcall Insert(int index, TBusinessClassesRoot *NewObject);
  __property TBusinessClassesRoot* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TBuildingList;
class TBuildingList : public TBusinessClassesRootList
{
protected:
  TBuilding* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TBuilding *NewObject);
public:
  int __fastcall Includes(TBuilding *anObject);
  int __fastcall IndexOf(TBuilding *anObject);
  void __fastcall Add(TBuilding *NewObject);
  TBuilding* __fastcall AddNew();
  void __fastcall Insert(int index, TBuilding *NewObject);
  __property TBuilding* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TPersonList;
class TPersonList : public TBusinessClassesRootList
{
protected:
  TPerson* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TPerson *NewObject);
public:
  int __fastcall Includes(TPerson *anObject);
  int __fastcall IndexOf(TPerson *anObject);
  void __fastcall Add(TPerson *NewObject);
  TPerson* __fastcall AddNew();
  void __fastcall Insert(int index, TPerson *NewObject);
  __property TPerson* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};


char* GeneratedCodeCRC();

#endif
 
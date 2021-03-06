/*****************************************/
/*      This file is autogenerated       */
/*   Any manual changes will be LOST!    */
/*****************************************/
/* Generated 2001-12-18 15:09:07         */
/*****************************************/
/* This file should be stored in the     */
/* same directory as the form/datamodule */
/* with the corresponding model          */
/*****************************************/
/* Copyright notice:                     */
/*                                       */
/*****************************************/

#include <vcl.h>
#pragma hdrstop

#include "ImageDemoClasses.hpp"

// interface uses

// interface dependancies

// attribute dependancies
#pragma link "BoldAttributes"

#pragma link "BoldDefs"
#pragma link "BoldSubscription"
#pragma link "BoldDeriver"
#pragma link "BoldElements"
#pragma link "BoldDomainElement"
#pragma link "BoldSystemRT"
#pragma link "BoldSystem"
#pragma link "BoldGeneratedCodeDictionary"

// implementation uses

// implementation dependancies

#include "BoldGeneratedCodeDictionary.hpp"

// Includefiles for methodimplementations


#define BoldMemberAssertInvalidObjectType = "Object of singlelink (%s.%s) is of wrong type (is %s, should be %s)";

// TBusinessClassesRoot

void __fastcall TBusinessClassesRootList::Add(TBusinessClassesRoot *NewObject)
{
  if (NewObject != NULL)
  {
    AddElement(NewObject);
  }
}

int __fastcall TBusinessClassesRootList::IndexOf(TBusinessClassesRoot *anObject)
{
  int result = IndexOfElement(anObject);
  return result;
}

int __fastcall TBusinessClassesRootList::Includes(TBusinessClassesRoot *anObject) // boolean?
{
  int result = IncludesElement(anObject);
  return result;
}

TBusinessClassesRoot* __fastcall TBusinessClassesRootList::AddNew()
{
  TBusinessClassesRoot *result = dynamic_cast<TBusinessClassesRoot*>(InternalAddNew());
  return result;
}

void __fastcall TBusinessClassesRootList::Insert(int index, TBusinessClassesRoot *NewObject)
{
  if (NewObject != NULL)
  {
    InsertElement(index, NewObject);
  }
}

TBusinessClassesRoot* __fastcall TBusinessClassesRootList::GetBoldObject(int index)
{
  TBusinessClassesRoot *result = dynamic_cast<TBusinessClassesRoot*>(GetElement(index));
  return result;
}

void __fastcall TBusinessClassesRootList::SetBoldObject(int index, TBusinessClassesRoot *NewObject)
{
  SetElement(index, NewObject);
}

// TImageClass

TBATypedBlob* __fastcall TImageClass::_Get_M_Image()
{
  // assert(ValidateMember("TImageClass", "Image", 0, __classid(TBATypedBlob)));
  TBATypedBlob *result = dynamic_cast<TBATypedBlob*>(BoldMembers[0]);
  return result;
};

String __fastcall TImageClass::_GetImage()
{
  String result = M_Image->AsString;
  return result;
}

void __fastcall TImageClass::_SetImage(String NewValue)
{
  M_Image->AsString = NewValue;
}

TBAString* __fastcall TImageClass::_Get_M_Description()
{
  // assert(ValidateMember("TImageClass", "Description", 1, __classid(TBAString)));
  TBAString *result = dynamic_cast<TBAString*>(BoldMembers[1]);
  return result;
};

String __fastcall TImageClass::_GetDescription()
{
  String result = M_Description->AsString;
  return result;
}

void __fastcall TImageClass::_SetDescription(String NewValue)
{
  M_Description->AsString = NewValue;
}

void __fastcall TImageClassList::Add(TImageClass *NewObject)
{
  if (NewObject != NULL)
  {
    AddElement(NewObject);
  }
}

int __fastcall TImageClassList::IndexOf(TImageClass *anObject)
{
  int result = IndexOfElement(anObject);
  return result;
}

int __fastcall TImageClassList::Includes(TImageClass *anObject) // boolean?
{
  int result = IncludesElement(anObject);
  return result;
}

TImageClass* __fastcall TImageClassList::AddNew()
{
  TImageClass *result = dynamic_cast<TImageClass*>(InternalAddNew());
  return result;
}

void __fastcall TImageClassList::Insert(int index, TImageClass *NewObject)
{
  if (NewObject != NULL)
  {
    InsertElement(index, NewObject);
  }
}

TImageClass* __fastcall TImageClassList::GetBoldObject(int index)
{
  TImageClass *result = dynamic_cast<TImageClass*>(GetElement(index));
  return result;
}

void __fastcall TImageClassList::SetBoldObject(int index, TImageClass *NewObject)
{
  SetElement(index, NewObject);
}

char *GeneratedCodeCRC()
{
  return "1866119815";
}

void __fastcall InstallObjectListClasses(TBoldGeneratedClassList *BoldObjectListClasses)
{
  BoldObjectListClasses->AddObjectEntry("BusinessClassesRoot", __classid(TBusinessClassesRootList));
  BoldObjectListClasses->AddObjectEntry("ImageClass", __classid(TImageClassList));
}

void __fastcall InstallBusinessClasses(TBoldGeneratedClassList *BoldObjectClasses)
{
  BoldObjectClasses->AddObjectEntry("BusinessClassesRoot", __classid(TBusinessClassesRoot));
  BoldObjectClasses->AddObjectEntry("ImageClass", __classid(TImageClass));
}

// the codedestricptor is initialized automatically

TBoldGeneratedCodeDescriptor *CodeDescriptor = GeneratedCodes()->AddGeneratedCodeDescriptorWithFunc("ImageDemoClasses", &InstallBusinessClasses, &InstallObjectListClasses, GeneratedCodeCRC());

// but should be unloaded manually when it is not needed anymore

void unregisterCode()
{
  if (CodeDescriptor != NULL)
  {
    GeneratedCodes()->Remove(CodeDescriptor);
  }
}


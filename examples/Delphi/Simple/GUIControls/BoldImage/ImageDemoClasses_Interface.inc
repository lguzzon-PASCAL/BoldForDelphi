(*****************************************)
(*      This file is autogenerated       *)
(*   Any manual changes will be LOST!    *)
(*****************************************)
(* Generated 2002-04-05 14:55:57         *)
(*****************************************)
(* This file should be stored in the     *)
(* same directory as the form/datamodule *)
(* with the corresponding model          *)
(*****************************************)
(* Copyright notice:                     *)
(*                                       *)
(*****************************************)

{$IFNDEF ImageDemoClasses_Interface.inc}
{$DEFINE ImageDemoClasses_Interface.inc}

{$IFNDEF ImageDemoClasses_unitheader}
unit ImageDemoClasses;
{$ENDIF}

interface

uses
  // interface uses
  // interface dependencies
  // attribute classes
  BoldAttributes,
  // other
  Classes,
  Controls, // for TDate
  SysUtils,
  BoldDefs,
  BoldSubscription,
  BoldDeriver,
  BoldElements,
  BoldDomainElement,
  BoldSystemRT,
  BoldSystem;

type
  { forward declarations of all classes }

  TBusinessClassesRoot = class;
  TBusinessClassesRootList = class;
  TImageClass = class;
  TImageClassList = class;

  TBusinessClassesRoot = class(TBoldObject)
  private
  protected
  public
  end;

  TImageClass = class(TBusinessClassesRoot)
  private
    function _Get_M_Image: TBATypedBlob;
    function _GetImage: String;
    procedure _SetImage(NewValue: String);
    function _Get_M_Description: TBAString;
    function _GetDescription: String;
    procedure _SetDescription(NewValue: String);
  protected
  public
    property M_Image: TBATypedBlob read _Get_M_Image;
    property M_Description: TBAString read _Get_M_Description;
    property Image: String read _GetImage write _SetImage;
    property Description: String read _GetDescription write _SetDescription;
  end;

  TBusinessClassesRootList = class(TBoldObjectList)
  protected
    function GetBoldObject(index: Integer): TBusinessClassesRoot;
    procedure SetBoldObject(index: Integer; NewObject: TBusinessClassesRoot);
  public
    function Includes(anObject: TBusinessClassesRoot): Boolean;
    function IndexOf(anObject: TBusinessClassesRoot): Integer;
    procedure Add(NewObject: TBusinessClassesRoot);
    function AddNew: TBusinessClassesRoot;
    procedure Insert(index: Integer; NewObject: TBusinessClassesRoot);
    property BoldObjects[index: Integer]: TBusinessClassesRoot read GetBoldObject write SetBoldObject; default;
  end;

  TImageClassList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TImageClass;
    procedure SetBoldObject(index: Integer; NewObject: TImageClass);
  public
    function Includes(anObject: TImageClass): Boolean;
    function IndexOf(anObject: TImageClass): Integer;
    procedure Add(NewObject: TImageClass);
    function AddNew: TImageClass;
    procedure Insert(index: Integer; NewObject: TImageClass);
    property BoldObjects[index: Integer]: TImageClass read GetBoldObject write SetBoldObject; default;
  end;

function GeneratedCodeCRC: String;

implementation

{$ENDIF}

 
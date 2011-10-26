// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AutoDesignPresentedItem_HeaderFile
#define _StepAP214_AutoDesignPresentedItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepAP214_AutoDesignPresentedItem_HeaderFile
#include <Handle_StepAP214_AutoDesignPresentedItem.hxx>
#endif

#ifndef _Handle_StepAP214_HArray1OfAutoDesignPresentedItemSelect_HeaderFile
#include <Handle_StepAP214_HArray1OfAutoDesignPresentedItemSelect.hxx>
#endif
#ifndef _StepVisual_PresentedItem_HeaderFile
#include <StepVisual_PresentedItem.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StepAP214_HArray1OfAutoDesignPresentedItemSelect;
class StepAP214_AutoDesignPresentedItemSelect;



class StepAP214_AutoDesignPresentedItem : public StepVisual_PresentedItem {

public:

  //! Returns a AutoDesignPresentedItem <br>
  Standard_EXPORT   StepAP214_AutoDesignPresentedItem();
  
  Standard_EXPORT   virtual  void Init(const Handle(StepAP214_HArray1OfAutoDesignPresentedItemSelect)& aItems) ;
  
  Standard_EXPORT     void SetItems(const Handle(StepAP214_HArray1OfAutoDesignPresentedItemSelect)& aItems) ;
  
  Standard_EXPORT     Handle_StepAP214_HArray1OfAutoDesignPresentedItemSelect Items() const;
  
  Standard_EXPORT     StepAP214_AutoDesignPresentedItemSelect ItemsValue(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Integer NbItems() const;




  DEFINE_STANDARD_RTTI(StepAP214_AutoDesignPresentedItem)

protected:




private: 


Handle_StepAP214_HArray1OfAutoDesignPresentedItemSelect items;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
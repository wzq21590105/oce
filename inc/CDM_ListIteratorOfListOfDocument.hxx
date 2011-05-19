// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDM_ListIteratorOfListOfDocument_HeaderFile
#define _CDM_ListIteratorOfListOfDocument_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
#ifndef _Handle_CDM_ListNodeOfListOfDocument_HeaderFile
#include <Handle_CDM_ListNodeOfListOfDocument.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class CDM_ListOfDocument;
class CDM_Document;
class CDM_ListNodeOfListOfDocument;



class CDM_ListIteratorOfListOfDocument  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   CDM_ListIteratorOfListOfDocument();
  
  Standard_EXPORT   CDM_ListIteratorOfListOfDocument(const CDM_ListOfDocument& L);
  
  Standard_EXPORT     void Initialize(const CDM_ListOfDocument& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     Handle_CDM_Document& Value() const;


friend class CDM_ListOfDocument;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item Handle_CDM_Document
#define Item_hxx <CDM_Document.hxx>
#define TCollection_ListNode CDM_ListNodeOfListOfDocument
#define TCollection_ListNode_hxx <CDM_ListNodeOfListOfDocument.hxx>
#define TCollection_ListIterator CDM_ListIteratorOfListOfDocument
#define TCollection_ListIterator_hxx <CDM_ListIteratorOfListOfDocument.hxx>
#define Handle_TCollection_ListNode Handle_CDM_ListNodeOfListOfDocument
#define TCollection_ListNode_Type_() CDM_ListNodeOfListOfDocument_Type_()
#define TCollection_List CDM_ListOfDocument
#define TCollection_List_hxx <CDM_ListOfDocument.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
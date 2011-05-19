// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_ListNodeOfListOfNamedShape_HeaderFile
#define _TNaming_ListNodeOfListOfNamedShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TNaming_ListNodeOfListOfNamedShape_HeaderFile
#include <Handle_TNaming_ListNodeOfListOfNamedShape.hxx>
#endif

#ifndef _Handle_TNaming_NamedShape_HeaderFile
#include <Handle_TNaming_NamedShape.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TNaming_NamedShape;
class TNaming_ListOfNamedShape;
class TNaming_ListIteratorOfListOfNamedShape;



class TNaming_ListNodeOfListOfNamedShape : public TCollection_MapNode {

public:

  
      TNaming_ListNodeOfListOfNamedShape(const Handle(TNaming_NamedShape)& I,const TCollection_MapNodePtr& n);
  
        Handle_TNaming_NamedShape& Value() const;




  DEFINE_STANDARD_RTTI(TNaming_ListNodeOfListOfNamedShape)

protected:




private: 


Handle_TNaming_NamedShape myValue;


};

#define Item Handle_TNaming_NamedShape
#define Item_hxx <TNaming_NamedShape.hxx>
#define TCollection_ListNode TNaming_ListNodeOfListOfNamedShape
#define TCollection_ListNode_hxx <TNaming_ListNodeOfListOfNamedShape.hxx>
#define TCollection_ListIterator TNaming_ListIteratorOfListOfNamedShape
#define TCollection_ListIterator_hxx <TNaming_ListIteratorOfListOfNamedShape.hxx>
#define Handle_TCollection_ListNode Handle_TNaming_ListNodeOfListOfNamedShape
#define TCollection_ListNode_Type_() TNaming_ListNodeOfListOfNamedShape_Type_()
#define TCollection_List TNaming_ListOfNamedShape
#define TCollection_List_hxx <TNaming_ListOfNamedShape.hxx>

#include <TCollection_ListNode.lxx>

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
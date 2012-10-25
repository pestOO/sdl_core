#include "../../include/JSONHandler/ALRPCObjects/TextField.h"
#include "TextFieldMarshaller.h"
#include "CharacterSetMarshaller.h"
#include "TextFieldNameMarshaller.h"
/*
  interface	Ford Sync RAPI
  version	1.2
  date		2011-05-17
  generated at	Thu Oct 25 06:32:04 2012
  source stamp	Thu Oct 25 06:28:28 2012
  author	robok0der
*/



TextField::TextField(const TextField& c)
{
  *this=c;
}


bool TextField::checkIntegrity(void)
{
  return TextFieldMarshaller::checkIntegrity(*this);
}


TextField::TextField(void)
{
}



bool TextField::set_characterSet(const CharacterSet& characterSet_)
{
  if(!CharacterSetMarshaller::checkIntegrityConst(characterSet_))   return false;
  characterSet=characterSet_;
  return true;
}

bool TextField::set_name(const TextFieldName& name_)
{
  if(!TextFieldNameMarshaller::checkIntegrityConst(name_))   return false;
  name=name_;
  return true;
}

bool TextField::set_rows(unsigned int rows_)
{
  if(rows_>3)  return false;
  if(rows_<1)  return false;
  rows=rows_;
  return true;
}

bool TextField::set_width(unsigned int width_)
{
  if(width_>40)  return false;
  if(width_<1)  return false;
  width=width_;
  return true;
}




const CharacterSet& TextField::get_characterSet(void) const 
{
  return characterSet;
}


const TextFieldName& TextField::get_name(void) const 
{
  return name;
}


unsigned int TextField::get_rows(void) const
{
  return rows;
}


unsigned int TextField::get_width(void) const
{
  return width;
}



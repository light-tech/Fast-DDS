// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file WideEnum.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "WideEnum.h"
#include "WideEnumTypeObject.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


MyEnumWideStruct::MyEnumWideStruct()
{
    // m_my_enum_wide com.eprosima.idl.parser.typecode.EnumTypeCode@631330c
    m_my_enum_wide = ::A;

    // Just to register all known types
    registerWideEnumTypes();
}

MyEnumWideStruct::~MyEnumWideStruct()
{
}

MyEnumWideStruct::MyEnumWideStruct(
        const MyEnumWideStruct& x)
{
    m_my_enum_wide = x.m_my_enum_wide;
}

MyEnumWideStruct::MyEnumWideStruct(
        MyEnumWideStruct&& x)
{
    m_my_enum_wide = x.m_my_enum_wide;
}

MyEnumWideStruct& MyEnumWideStruct::operator =(
        const MyEnumWideStruct& x)
{

    m_my_enum_wide = x.m_my_enum_wide;

    return *this;
}

MyEnumWideStruct& MyEnumWideStruct::operator =(
        MyEnumWideStruct&& x)
{

    m_my_enum_wide = x.m_my_enum_wide;

    return *this;
}

bool MyEnumWideStruct::operator ==(
        const MyEnumWideStruct& x) const
{

    return (m_my_enum_wide == x.m_my_enum_wide);
}

bool MyEnumWideStruct::operator !=(
        const MyEnumWideStruct& x) const
{
    return !(*this == x);
}

size_t MyEnumWideStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

size_t MyEnumWideStruct::getCdrSerializedSize(
        const MyEnumWideStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void MyEnumWideStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << (uint32_t)m_my_enum_wide;

}

void MyEnumWideStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m_my_enum_wide = (MyEnumWide)enum_value;
    }

}

/*!
 * @brief This function sets a value in member my_enum_wide
 * @param _my_enum_wide New value for member my_enum_wide
 */
void MyEnumWideStruct::my_enum_wide(
        MyEnumWide _my_enum_wide)
{
    m_my_enum_wide = _my_enum_wide;
}

/*!
 * @brief This function returns the value of member my_enum_wide
 * @return Value of member my_enum_wide
 */
MyEnumWide MyEnumWideStruct::my_enum_wide() const
{
    return m_my_enum_wide;
}

/*!
 * @brief This function returns a reference to member my_enum_wide
 * @return Reference to member my_enum_wide
 */
MyEnumWide& MyEnumWideStruct::my_enum_wide()
{
    return m_my_enum_wide;
}


size_t MyEnumWideStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool MyEnumWideStruct::isKeyDefined()
{
    return false;
}

void MyEnumWideStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}

SimpleWideUnion::SimpleWideUnion()
{
    m__d = A;
    // m_first com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7a3d45bd
    m_first = 0;
    // m_second com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1e7c7811
    m_second = 0;
    // m_third com.eprosima.idl.parser.typecode.PrimitiveTypeCode@77ec78b9
    m_third = 0;
}

SimpleWideUnion::~SimpleWideUnion()
{
}

SimpleWideUnion::SimpleWideUnion(
        const SimpleWideUnion& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first = x.m_first;
        break;
        case B:
        m_second = x.m_second;
        break;
        case D:
        m_third = x.m_third;
        break;
        default:
        break;
    }
}

SimpleWideUnion::SimpleWideUnion(
        SimpleWideUnion&& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first = x.m_first;
        break;
        case B:
        m_second = x.m_second;
        break;
        case D:
        m_third = x.m_third;
        break;
        default:
        break;
    }
}

SimpleWideUnion& SimpleWideUnion::operator =(
        const SimpleWideUnion& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first = x.m_first;
        break;
        case B:
        m_second = x.m_second;
        break;
        case D:
        m_third = x.m_third;
        break;
        default:
        break;
    }

    return *this;
}

SimpleWideUnion& SimpleWideUnion::operator =(
        SimpleWideUnion&& x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case A:
        m_first = x.m_first;
        break;
        case B:
        m_second = x.m_second;
        break;
        case D:
        m_third = x.m_third;
        break;
        default:
        break;
    }

    return *this;
}

bool SimpleWideUnion::operator ==(
        const SimpleWideUnion& x) const
{
    if (m__d != x.m__d)
    {
        return false;
    }

    switch(m__d)
    {
        case A:
            return (m_first == x.m_first);
            break;
        case B:
            return (m_second == x.m_second);
            break;
        case D:
            return (m_third == x.m_third);
            break;
        default:
        break;
    }
    return false;
}

bool SimpleWideUnion::operator !=(
        const SimpleWideUnion& x) const
{
    return !(*this == x);
}

void SimpleWideUnion::_d(
        int32_t __d)
{
    bool b = false;

    switch(m__d)
    {
        case A:
        switch(__d)
        {
            case A:
            b = true;
            break;
            default:
            break;
        }
        break;
        case B:
        switch(__d)
        {
            case B:
            b = true;
            break;
            default:
            break;
        }
        break;
        case D:
        switch(__d)
        {
            case D:
            b = true;
            break;
            default:
            break;
        }
        break;
    }

    if(!b)
    {
        throw BadParamException("Discriminator doesn't correspond with the selected union member");
    }

    m__d = __d;
}

int32_t SimpleWideUnion::_d() const
{
    return m__d;
}

int32_t& SimpleWideUnion::_d()
{
    return m__d;
}

void SimpleWideUnion::first(
        int32_t _first)
{
    m_first = _first;
    m__d = A;
}

int32_t SimpleWideUnion::first() const
{
    bool b = false;

    switch(m__d)
    {
        case A:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_first;
}

int32_t& SimpleWideUnion::first()
{
    bool b = false;

    switch(m__d)
    {
        case A:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_first;
}
void SimpleWideUnion::second(
        int64_t _second)
{
    m_second = _second;
    m__d = B;
}

int64_t SimpleWideUnion::second() const
{
    bool b = false;

    switch(m__d)
    {
        case B:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_second;
}

int64_t& SimpleWideUnion::second()
{
    bool b = false;

    switch(m__d)
    {
        case B:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_second;
}
void SimpleWideUnion::third(
        uint8_t _third)
{
    m_third = _third;
    m__d = D;
}

uint8_t SimpleWideUnion::third() const
{
    bool b = false;

    switch(m__d)
    {
        case D:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_third;
}

uint8_t& SimpleWideUnion::third()
{
    bool b = false;

    switch(m__d)
    {
        case D:
        b = true;
        break;
        default:
        break;
    }
    if(!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_third;
}

size_t SimpleWideUnion::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
    size_t reset_alignment = 0;
    size_t union_max_size_serialized = 0;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


        reset_alignment = current_alignment;

        reset_alignment += 4 + eprosima::fastcdr::Cdr::alignment(reset_alignment, 4);


        if(union_max_size_serialized < reset_alignment)
            union_max_size_serialized = reset_alignment;

        
        reset_alignment = current_alignment;

        reset_alignment += 8 + eprosima::fastcdr::Cdr::alignment(reset_alignment, 8);


        if(union_max_size_serialized < reset_alignment)
            union_max_size_serialized = reset_alignment;

        
        reset_alignment = current_alignment;

        reset_alignment += 1 + eprosima::fastcdr::Cdr::alignment(reset_alignment, 1);


        if(union_max_size_serialized < reset_alignment)
            union_max_size_serialized = reset_alignment;

        

    return union_max_size_serialized - initial_alignment;
}

// TODO(Ricardo) Review
size_t SimpleWideUnion::getCdrSerializedSize(
        const SimpleWideUnion& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    switch(data.m__d)
    {
        case A:
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

        break;
        case B:
        current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

        break;
        case D:
        current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

        break;
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void SimpleWideUnion::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m__d;

    switch(m__d)
    {
        case A:
        scdr << m_first;

        break;
        case B:
        scdr << m_second;

        break;
        case D:
        scdr << m_third;

        break;
        default:
        break;
    }
}

void SimpleWideUnion::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m__d;

    switch(m__d)
    {
        case A:
        dcdr >> m_first;
        break;
        case B:
        dcdr >> m_second;
        break;
        case D:
        dcdr >> m_third;
        break;
        default:
        break;
    }
}


SimpleWideUnionStruct::SimpleWideUnionStruct()
{
    // m_my_union com.eprosima.idl.parser.typecode.UnionTypeCode@4d3167f4


    // Just to register all known types
    registerWideEnumTypes();
}

SimpleWideUnionStruct::~SimpleWideUnionStruct()
{
}

SimpleWideUnionStruct::SimpleWideUnionStruct(
        const SimpleWideUnionStruct& x)
{
    m_my_union = x.m_my_union;
}

SimpleWideUnionStruct::SimpleWideUnionStruct(
        SimpleWideUnionStruct&& x)
{
    m_my_union = std::move(x.m_my_union);
}

SimpleWideUnionStruct& SimpleWideUnionStruct::operator =(
        const SimpleWideUnionStruct& x)
{

    m_my_union = x.m_my_union;

    return *this;
}

SimpleWideUnionStruct& SimpleWideUnionStruct::operator =(
        SimpleWideUnionStruct&& x)
{

    m_my_union = std::move(x.m_my_union);

    return *this;
}

bool SimpleWideUnionStruct::operator ==(
        const SimpleWideUnionStruct& x) const
{

    return (m_my_union == x.m_my_union);
}

bool SimpleWideUnionStruct::operator !=(
        const SimpleWideUnionStruct& x) const
{
    return !(*this == x);
}

size_t SimpleWideUnionStruct::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += SimpleWideUnion::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t SimpleWideUnionStruct::getCdrSerializedSize(
        const SimpleWideUnionStruct& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += SimpleWideUnion::getCdrSerializedSize(data.my_union(), current_alignment);

    return current_alignment - initial_alignment;
}

void SimpleWideUnionStruct::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_my_union;

}

void SimpleWideUnionStruct::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_my_union;
}

/*!
 * @brief This function copies the value in member my_union
 * @param _my_union New value to be copied in member my_union
 */
void SimpleWideUnionStruct::my_union(
        const SimpleWideUnion& _my_union)
{
    m_my_union = _my_union;
}

/*!
 * @brief This function moves the value in member my_union
 * @param _my_union New value to be moved in member my_union
 */
void SimpleWideUnionStruct::my_union(
        SimpleWideUnion&& _my_union)
{
    m_my_union = std::move(_my_union);
}

/*!
 * @brief This function returns a constant reference to member my_union
 * @return Constant reference to member my_union
 */
const SimpleWideUnion& SimpleWideUnionStruct::my_union() const
{
    return m_my_union;
}

/*!
 * @brief This function returns a reference to member my_union
 * @return Reference to member my_union
 */
SimpleWideUnion& SimpleWideUnionStruct::my_union()
{
    return m_my_union;
}

size_t SimpleWideUnionStruct::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool SimpleWideUnionStruct::isKeyDefined()
{
    return false;
}

void SimpleWideUnionStruct::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}

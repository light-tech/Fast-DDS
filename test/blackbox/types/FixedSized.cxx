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
 * @file FixedSized.cpp
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

#include "FixedSized.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

FixedSized::FixedSized()
{
    // m_index com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7fac631b
    m_index = 0;

}

FixedSized::~FixedSized()
{
}

FixedSized::FixedSized(
        const FixedSized& x)
{
    m_index = x.m_index;
}

FixedSized::FixedSized(
        FixedSized&& x)
{
    m_index = x.m_index;
}

FixedSized& FixedSized::operator =(
        const FixedSized& x)
{

    m_index = x.m_index;

    return *this;
}

FixedSized& FixedSized::operator =(
        FixedSized&& x)
{

    m_index = x.m_index;

    return *this;
}

bool FixedSized::operator ==(
        const FixedSized& x) const
{

    return (m_index == x.m_index);
}

bool FixedSized::operator !=(
        const FixedSized& x) const
{
    return !(*this == x);
}

size_t FixedSized::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    return current_alignment - initial_alignment;
}

size_t FixedSized::getCdrSerializedSize(
        const FixedSized& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    return current_alignment - initial_alignment;
}

void FixedSized::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_index;

}

void FixedSized::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_index;
}

/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void FixedSized::index(
        uint16_t _index)
{
    m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint16_t FixedSized::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint16_t& FixedSized::index()
{
    return m_index;
}


size_t FixedSized::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool FixedSized::isKeyDefined()
{
    return false;
}

void FixedSized::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}

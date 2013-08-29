/* Copyright (c) 2012 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLDiscoveryJsonSchema.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   APIs Discovery Service (discovery/v1)
// Description:
//   Lets you discover information about other Google APIs, such as what APIs
//   are available, the resource and method details for each API
// Documentation:
//   http://code.google.com/apis/discovery
// Classes:
//   GTLDiscoveryJsonSchema (0 custom class methods, 18 custom properties)
//   GTLDiscoveryJsonSchemaAnnotations (0 custom class methods, 1 custom properties)
//   GTLDiscoveryJsonSchemaProperties (0 custom class methods, 0 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLDiscoveryJsonSchema;
@class GTLDiscoveryJsonSchemaAnnotations;
@class GTLDiscoveryJsonSchemaProperties;

// ----------------------------------------------------------------------------
//
//   GTLDiscoveryJsonSchema
//

@interface GTLDiscoveryJsonSchema : GTLObject

// A reference to another schema. The value of this property is the "id" of
// another schema.
@property (copy) NSString *xRef;

// If this is a schema for an object, this property is the schema for any
// additional properties with dynamic keys on this object.
// Remapped to 'additionalPropertiesProperty' to avoid GTLObject's
// 'additionalProperties'.
@property (retain) GTLDiscoveryJsonSchema *additionalPropertiesProperty;

// Additional information about this property.
@property (retain) GTLDiscoveryJsonSchemaAnnotations *annotations;

// The default value of this property (if one exists).
// Remapped to 'defaultProperty' to avoid language reserved word 'default'.
@property (copy) NSString *defaultProperty;

// A description of this object.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (copy) NSString *descriptionProperty;

// Values this parameter may take (if it is an enum).
// Remapped to 'enumProperty' to avoid language reserved word 'enum'.
@property (retain) NSArray *enumProperty;  // of NSString

// The descriptions for the enums. Each position maps to the corresponding value
// in the "enum" array.
@property (retain) NSArray *enumDescriptions;  // of NSString

// An additional regular expression or key that helps constrain the value. For
// more details see:
// http://tools.ietf.org/html/draft-zyp-json-schema-03#section-5.23
@property (copy) NSString *format;

// Unique identifier for this schema.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// If this is a schema for an array, this property is the schema for each
// element in the array.
@property (retain) GTLDiscoveryJsonSchema *items;

// Whether this parameter goes in the query or the path for REST requests.
@property (copy) NSString *location;

// The maximum value of this parameter.
@property (copy) NSString *maximum;

// The minimum value of this parameter.
@property (copy) NSString *minimum;

// The regular expression this parameter must conform to.
@property (copy) NSString *pattern;

// If this is a schema for an object, list the schema for each property of this
// object.
@property (retain) GTLDiscoveryJsonSchemaProperties *properties;

// Whether this parameter may appear multiple times.
@property (retain) NSNumber *repeated;  // boolValue

// Whether the parameter is required.
@property (retain) NSNumber *required;  // boolValue

// The value type for this schema. A list of values can be found here:
// http://tools.ietf.org/html/draft-zyp-json-schema-03#section-5.1
@property (copy) NSString *type;

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryJsonSchemaAnnotations
//

@interface GTLDiscoveryJsonSchemaAnnotations : GTLObject

// A list of methods for which this property is required on requests.
@property (retain) NSArray *required;  // of NSString

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryJsonSchemaProperties
//

@interface GTLDiscoveryJsonSchemaProperties : GTLObject
// This object is documented as having more properties that are
// GTLDiscoveryJsonSchema. Use -additionalJSONKeys and
// -additionalPropertyForName: to get the list of properties and then fetch
// them; or -additionalProperties to fetch them all at once.
@end

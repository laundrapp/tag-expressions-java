//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/tag-expressions-java/src/main/java/io/cucumber/tagexpressions/TagExpressionParser.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_IoCucumberTagexpressionsTagExpressionParser")
#ifdef RESTRICT_IoCucumberTagexpressionsTagExpressionParser
#define INCLUDE_ALL_IoCucumberTagexpressionsTagExpressionParser 0
#else
#define INCLUDE_ALL_IoCucumberTagexpressionsTagExpressionParser 1
#endif
#undef RESTRICT_IoCucumberTagexpressionsTagExpressionParser

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (IoCucumberTagexpressionsTagExpressionParser_) && (INCLUDE_ALL_IoCucumberTagexpressionsTagExpressionParser || defined(INCLUDE_IoCucumberTagexpressionsTagExpressionParser))
#define IoCucumberTagexpressionsTagExpressionParser_

@protocol IoCucumberTagexpressionsExpression;

@interface IoCucumberTagexpressionsTagExpressionParser : NSObject

#pragma mark Public

- (instancetype)init;

- (id<IoCucumberTagexpressionsExpression>)parseWithNSString:(NSString *)infix;

@end

J2OBJC_STATIC_INIT(IoCucumberTagexpressionsTagExpressionParser)

FOUNDATION_EXPORT void IoCucumberTagexpressionsTagExpressionParser_init(IoCucumberTagexpressionsTagExpressionParser *self);

FOUNDATION_EXPORT IoCucumberTagexpressionsTagExpressionParser *new_IoCucumberTagexpressionsTagExpressionParser_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT IoCucumberTagexpressionsTagExpressionParser *create_IoCucumberTagexpressionsTagExpressionParser_init(void);

J2OBJC_TYPE_LITERAL_HEADER(IoCucumberTagexpressionsTagExpressionParser)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_IoCucumberTagexpressionsTagExpressionParser")

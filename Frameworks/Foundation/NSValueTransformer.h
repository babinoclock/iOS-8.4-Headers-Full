/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSValueTransformer : NSObject
+(id)_transformerRegistry;
+(id)valueTransformerNames;
+(id)valueTransformerForName:(id)arg1 ;
+(void)setValueTransformer:(id)arg1 forName:(id)arg2 ;
+(Class)transformedValueClass;
+(char)allowsReverseTransformation;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)transformedValue:(id)arg1 ;
@end


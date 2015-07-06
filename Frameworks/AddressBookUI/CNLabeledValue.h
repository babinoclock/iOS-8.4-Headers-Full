/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/NSCopying.h>

@class NSString;

@interface CNLabeledValue : NSObject <NSCopying> {

	int _multiValueIdentifier;
	NSString* _label;
	id _value;

}

@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (copy,readonly) id value;                               //@synthesize value=_value - In the implementation block
@property (readonly) int multiValueIdentifier; 
@property (copy,readonly) NSString * localizedLabel; 
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
+(id)allCustomLabels;
+(void)deleteCustomLabel:(id)arg1 ;
+(id)labeledValueWithMultiValueIdentifier:(int)arg1 label:(id)arg2 value:(id)arg3 ;
+(id)builtinLabelsForProperty:(id)arg1 ;
+(id)defaultLabels;
+(id)allLabels;
+(void*)addressBook;
-(void)setMultiValueIdentifier:(int)arg1 ;
-(int)multiValueIdentifier;
-(NSString *)localizedLabel;
-(id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2 ;
-(char)isEqualToLabelledValue:(id)arg1 ;
-(id)initWithMultiValueIdentifier:(int)arg1 label:(id)arg2 value:(id)arg3 ;
-(char)isEqualToLabelledValue:(id)arg1 includeIdentifiers:(char)arg2 ;
-(id)labeledValueBySettingValue:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(id)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
@end


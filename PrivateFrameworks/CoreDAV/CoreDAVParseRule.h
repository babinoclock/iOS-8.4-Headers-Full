/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CoreDAVParseRule : NSObject {

	int _minimumNumber;
	int _maximumNumber;
	NSString* _nameSpace;
	NSString* _elementName;
	Class _objectClass;
	SEL _setterMethod;

}

@property (nonatomic,readonly) int minimumNumber;                   //@synthesize minimumNumber=_minimumNumber - In the implementation block
@property (nonatomic,readonly) int maximumNumber;                   //@synthesize maximumNumber=_maximumNumber - In the implementation block
@property (nonatomic,readonly) NSString * nameSpace;                //@synthesize nameSpace=_nameSpace - In the implementation block
@property (nonatomic,readonly) NSString * elementName;              //@synthesize elementName=_elementName - In the implementation block
@property (nonatomic,readonly) Class objectClass;                   //@synthesize objectClass=_objectClass - In the implementation block
@property (nonatomic,readonly) SEL setterMethod;                    //@synthesize setterMethod=_setterMethod - In the implementation block
+(id)ruleWithMinimumNumber:(int)arg1 maximumNumber:(int)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6 ;
-(void)dealloc;
-(id)description;
-(NSString *)nameSpace;
-(id)initWithMinimumNumber:(int)arg1 maximumNumber:(int)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6 ;
-(Class)objectClass;
-(SEL)setterMethod;
-(int)minimumNumber;
-(int)maximumNumber;
-(NSString *)elementName;
@end


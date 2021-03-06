/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface ASParseRule : NSObject {

	int _minimumNumber;
	int _maximumNumber;
	int _codePage;
	int _token;
	Class _objectClass;
	SEL _setterMethod;
	int _dataclass;
	NSDictionary* _subclassRuleSet;
	NSDictionary* _callbackDict;
	NSDictionary* _streamCallbackDict;

}
-(int)token;
-(int)codePage;
-(id)initWithMinimumNumber:(int)arg1 maximumNumber:(int)arg2 codePage:(int)arg3 token:(int)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6 dataclass:(int)arg7 callbackDict:(id)arg8 streamCallbackDict:(id)arg9 subclassRuleSet:(id)arg10 ;
-(int)dataclass;
-(Class)objectClass;
-(id)subclassRuleSet;
-(SEL)setterMethod;
-(int)minimumNumber;
-(int)maximumNumber;
-(id)callbackDict;
-(id)streamCallbackDict;
@end


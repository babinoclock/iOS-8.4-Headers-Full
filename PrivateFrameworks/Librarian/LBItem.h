/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Librarian.framework/Librarian
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString, NSMutableDictionary;

@interface LBItem : NSObject {

	NSURL* _url;
	NSString* _path;
	NSMutableDictionary* _attributes;
	id _replacement;

}

@property (assign,nonatomic) id replacement;              //@synthesize replacement=_replacement - In the implementation block
-(id)attributeNames;
-(id)attributesForNames:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)dealloc;
-(id)url;
-(id)path;
-(id)initWithURL:(id)arg1 ;
-(id)replacement;
-(void)setReplacement:(id)arg1 ;
-(id)initWithURL:(id)arg1 itemUpdateInfo:(id)arg2 ;
-(void)updateInfo:(id)arg1 ;
-(id)attributeForName:(id)arg1 ;
-(id)_attributes;
@end


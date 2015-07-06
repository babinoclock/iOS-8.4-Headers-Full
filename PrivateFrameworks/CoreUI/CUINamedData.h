/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CUIRenditionKey, NSString, NSData;

@interface CUINamedData : NSObject {

	CUIRenditionKey* _key;
	unsigned _storageRef;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * utiType; 
@property (nonatomic,readonly) NSData * data; 
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSData *)data;
-(NSString *)utiType;
-(id)_rendition;
-(id)_themeStore;
-(id)_renditionForSpecificKey:(id)arg1 ;
-(id)_renditionName;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned)arg3 ;
@end

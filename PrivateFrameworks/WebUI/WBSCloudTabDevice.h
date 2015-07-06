/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <WebUI/NSCopying.h>

@class NSString, NSArray, NSDate, NSDictionary;

@interface WBSCloudTabDevice : NSObject <NSCopying> {

	char _closeRequestSupported;
	char _hasDuplicateName;
	NSString* _name;
	NSString* _uuid;
	NSArray* _tabs;
	NSDate* _lastModified;

}

@property (nonatomic,copy,readonly) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (getter=isCloseRequestSupported,nonatomic,readonly) char closeRequestSupported;              //@synthesize closeRequestSupported=_closeRequestSupported - In the implementation block
@property (nonatomic,readonly) char hasDuplicateName;                                                  //@synthesize hasDuplicateName=_hasDuplicateName - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tabs;                                                    //@synthesize tabs=_tabs - In the implementation block
@property (nonatomic,readonly) NSDate * lastModified;                                                  //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)_dictionaryWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(char)arg3 tabs:(id)arg4 ;
+(char)isCloudTabDeviceDictionary:(id)arg1 ;
+(unsigned)tabCountInDictionary:(id)arg1 ;
+(id)deviceNameInDictionary:(id)arg1 ;
+(id)lastModifiedDateInDictionary:(id)arg1 ;
+(char)hasDuplicateDeviceNameInDictionary:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)uuid;
-(NSArray *)tabs;
-(NSDate *)lastModified;
-(id)initWithDictionary:(id)arg1 uuid:(id)arg2 ;
-(id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(char)arg3 tabs:(id)arg4 uuid:(id)arg5 ;
-(id)deviceByRemovingTab:(id)arg1 ;
-(id)deviceByRemovingTabs:(id)arg1 ;
-(char)isCloseRequestSupported;
-(char)hasDuplicateName;
@end


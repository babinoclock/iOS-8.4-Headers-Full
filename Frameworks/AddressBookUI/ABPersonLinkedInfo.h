/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, ABUIPerson;

@interface ABPersonLinkedInfo : NSObject {

	NSString* _type;
	NSString* _name;
	ABUIPerson* _person;
	char _unified;

}

@property (retain) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (retain) ABUIPerson * person;                 //@synthesize person=_person - In the implementation block
@property (getter=isUnified) char unified;              //@synthesize unified=_unified - In the implementation block
-(char)isUnified;
-(void)setUnified:(char)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(ABUIPerson *)person;
-(void)setPerson:(ABUIPerson *)arg1 ;
@end


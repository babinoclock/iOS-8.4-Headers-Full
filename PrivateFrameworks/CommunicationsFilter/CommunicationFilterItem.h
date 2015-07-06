/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CommunicationsFilter/CommunicationsFilter-Structs.h>
@class NSString;

@interface CommunicationFilterItem : NSObject {

	CFPhoneNumberRef _phoneNumber;
	NSString* _emailAddress;

}

@property (nonatomic,readonly) CFPhoneNumberRef phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;                   //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSString * unformattedID; 
-(void)dealloc;
-(id)description;
-(CFPhoneNumberRef)phoneNumber;
-(id)dictionaryRepresentation;
-(NSString *)emailAddress;
-(id)initWithEmailAddress:(id)arg1 ;
-(char)matchesFilterItem:(id)arg1 ;
-(id)_dictionaryRepresentationWithRedaction;
-(char)_acceptItemType:(id)arg1 ;
-(char)_acceptVersion:(id)arg1 ;
-(id)initWithPhoneNumber:(CFPhoneNumberRef)arg1 ;
-(NSString *)unformattedID;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(char)isPhoneNumber;
@end

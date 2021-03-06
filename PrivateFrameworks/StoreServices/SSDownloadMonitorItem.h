/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSXPCCoding.h>

@class NSString;

@interface SSDownloadMonitorItem : NSObject <SSXPCCoding> {

	NSString* _clientIdentifier;
	int _itemState;
	NSString* _representativeTitle;
	NSString* _statusString;
	int _totalNumberOfItems;
	unsigned _transferTypes;

}

@property (nonatomic,copy) NSString * clientIdentifier;                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) int itemState;                             //@synthesize itemState=_itemState - In the implementation block
@property (nonatomic,copy) NSString * representativeTitle;              //@synthesize representativeTitle=_representativeTitle - In the implementation block
@property (nonatomic,copy) NSString * statusString;                     //@synthesize statusString=_statusString - In the implementation block
@property (assign,nonatomic) int totalNumberOfItems;                    //@synthesize totalNumberOfItems=_totalNumberOfItems - In the implementation block
@property (assign,nonatomic) unsigned transferTypes;                    //@synthesize transferTypes=_transferTypes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)clientIdentifier;
-(void)setStatusString:(NSString *)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)statusString;
-(void)setItemState:(int)arg1 ;
-(int)itemState;
-(NSString *)representativeTitle;
-(void)setRepresentativeTitle:(NSString *)arg1 ;
-(int)totalNumberOfItems;
-(void)setTotalNumberOfItems:(int)arg1 ;
-(unsigned)transferTypes;
-(void)setTransferTypes:(unsigned)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVPrincipalItem, CoreDAVInvertItem, CoreDAVGrantItem, CoreDAVDenyItem, CoreDAVItemWithNoChildren, CoreDAVItemWithHrefChildItem;

@interface CoreDAVACEItem : CoreDAVItem {

	CoreDAVPrincipalItem* _principal;
	CoreDAVInvertItem* _invert;
	CoreDAVGrantItem* _grant;
	CoreDAVDenyItem* _deny;
	CoreDAVItemWithNoChildren* _protectedItem;
	CoreDAVItemWithHrefChildItem* _inherited;

}

@property (nonatomic,retain) CoreDAVPrincipalItem * principal;                       //@synthesize principal=_principal - In the implementation block
@property (nonatomic,retain) CoreDAVInvertItem * invert;                             //@synthesize invert=_invert - In the implementation block
@property (nonatomic,retain) CoreDAVGrantItem * grant;                               //@synthesize grant=_grant - In the implementation block
@property (nonatomic,retain) CoreDAVDenyItem * deny;                                 //@synthesize deny=_deny - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * protectedItem;              //@synthesize protectedItem=_protectedItem - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * inherited;               //@synthesize inherited=_inherited - In the implementation block
+(id)copyParseRules;
+(id)privilegeItemWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(CoreDAVInvertItem *)invert;
-(void)dealloc;
-(id)init;
-(id)description;
-(CoreDAVDenyItem *)deny;
-(void)write:(id)arg1 ;
-(CoreDAVPrincipalItem *)principal;
-(CoreDAVGrantItem *)grant;
-(CoreDAVItemWithHrefChildItem *)inherited;
-(CoreDAVItemWithNoChildren *)protectedItem;
-(void)setPrincipal:(CoreDAVPrincipalItem *)arg1 ;
-(void)setInvert:(CoreDAVInvertItem *)arg1 ;
-(void)setGrant:(CoreDAVGrantItem *)arg1 ;
-(void)setDeny:(CoreDAVDenyItem *)arg1 ;
-(void)setProtectedItem:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setInherited:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(id)initWithPrincipal:(id)arg1 shouldInvert:(char)arg2 action:(int)arg3 withPrivileges:(id)arg4 ;
@end


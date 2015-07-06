/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WeatherXMLHTTPRequest.h>

@protocol WeatherValidatorDelegate;
@interface WeatherValidator : WeatherXMLHTTPRequest {

	id<WeatherValidatorDelegate> _delegate;

}
+(id)sharedWeatherValidator;
-(void)failWithError:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)_failWithError:(id)arg1 ;
-(id)aggregateDictionaryDomain;
-(void)processDocument:(xmlDoc*)arg1 ;
-(void)validateLocation:(id)arg1 ;
@end


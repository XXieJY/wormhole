//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IOSMctoPlayer.h"

@interface PumaPlayerViewController : NSObject
{
    IOSMctoPlayer *_player;
}

- (id)getMovieJSON;
- (id)getMovieInfo;

- (struct MctoPlayerMovieParams_)getMovieParamsWithSettingDic:(id)arg1;

- (void)playMovieWithDic:(id)arg1 andAutoJump:(_Bool)arg2;

@end

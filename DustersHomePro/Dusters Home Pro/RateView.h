//
//  RateView.h
//  CustomView
//
//  Created by Ray Wenderlich on 2/17/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RateView;

@protocol RateViewDelegate
- (void)rateView:(RateView *)rateView ratingDidChange:(float)rating;
@end

@interface RateView : UIView

@property (strong, nonatomic) UIImage *notSelectedImage;
@property (strong, nonatomic) UIImage *quarterSelectedImage;
@property (strong, nonatomic) UIImage *halfSelectedImage;
@property (strong, nonatomic) UIImage *three4thSelectedImage;
@property (strong, nonatomic) UIImage *fullSelectedImage;
@property (assign, nonatomic) float rating;
@property (assign) BOOL editable;
@property (strong) NSMutableArray * imageViews;
@property (assign, nonatomic) int maxRating;
@property (assign) int midMargin;
@property (assign) int leftMargin;
@property (assign) CGSize minImageSize;
@property (assign) id <RateViewDelegate> delegate;

@end

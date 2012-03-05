#import <UIKit/UIKit.h>

#define MIN_TAB_WIDTH 320/3.0

@class BHTabStyle;

@interface BHTabsView : UIScrollView {
  NSArray *tabViews;
  BHTabStyle *style;
}

@property (nonatomic, retain) NSArray *tabViews;
@property (nonatomic, retain) BHTabStyle *style;


@end

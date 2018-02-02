# BTLayout
一个简单易用的相对布局工具，基于frame布局实现。
由于只是frame操作的封装，直观易理解，与frame布局性能相当，适应各种场景和各种类型的动画。

# Example
```
- (void)viewDidLayoutSubviews
{
    [super viewDidLayoutSubviews];
    
    [self.view0 widthAsParentMarginsLeft:self.view.sWidth/2 right:10];  //设置尺寸 宽度与父View对齐，靠右边距10，左侧居中
    self.view0.sHeight = 50;                    //设置尺寸 高度50
    [self.view0 pAlignParentBottomOffset:-10];  //设置位置 位置与父View对齐，靠父View底部，偏移-10
    
    self.view1.pOrigin = CGPointMake(10, 30);   //设置位置
    [self.view1 sLeftTo:self.view0 margin:0];   //设置尺寸 右侧在view0左距离0
    [self.view1 sAbove:self.view0 margin:-self.view0.sHeight/2];    //设置尺寸 右侧在view0上距离（view0的负半高）
    
    [self.view2 pRightTo:self.view1 margin:10]; //设置位置 在view1右侧距离10
    [self.view2 sAlignRight:self.view0];        //设置尺寸 右侧与view0右侧对齐
    [self.view2 sAlignTop:self.view1];          //设置尺寸 上侧与view1上侧对齐
    [self.view2 sAbove:self.view0 margin:10];   //设置尺寸 底部在view0上距离10
}
```
竖屏的效果如下
<br/>
<img src="https://github.com/britayin/BTLayout/blob/master/Images/Portrait.png?raw=true" width = "300" alt="竖屏" border="1" />
<br/>
横屏的效果如下
<br/>
<img src="https://github.com/britayin/BTLayout/blob/master/Images/Landscape.png?raw=true" width = "500" alt="竖屏" border="1" />


# 对UIView进行扩展
包含三种类型的API
- 固定尺寸(size)，设置位置(origin)
这类接口以p开头
```
- (void)pAlignBottom:(UIView *)view offset:(CGFloat)offset;
- (void)pAlignBottom:(UIView *)view;

- (void)pAlignParentBottomOffset:(CGFloat)offset;
- (void)pAlignParentBottom;

- (void)pAlignTop:(UIView *)view offset:(CGFloat)offset;
- (void)pAlignTop:(UIView *)view;

- (void)pAlignParentTopOffset:(CGFloat)offset;
- (void)pAlignParentTop;

- (void)pAlignLeft:(UIView *)view offset:(CGFloat)offset;
- (void)pAlignLeft:(UIView *)view;

- (void)pAlignParentLeftOffset:(CGFloat)offset;
- (void)pAlignParentLeft;

- (void)pAlignRight:(UIView *)view offset:(CGFloat)offset;
- (void)pAlignRight:(UIView *)view;

- (void)pAlignParentRightOffset:(CGFloat)offset;
- (void)pAlignParentRight;

- (void)pAlignCenterX:(UIView *)view offset:(CGFloat)offset;
- (void)pAlignCenterX:(UIView *)view;

- (void)pAlignParentCenterXOffset:(CGFloat)offset;
- (void)pAlignParentCenterX;

- (void)pAlignCenterY:(UIView *)view offset:(CGFloat)offset;
- (void)pAlignCenterY:(UIView *)view;

- (void)pAlignParentCenterYOffset:(CGFloat)offset;
- (void)pAlignParentCenterY;

- (void)pAlignCenter:(UIView *)view;
- (void)pAlignParentCenter;

- (void)pBelow:(UIView *)view margin:(CGFloat)margin;
- (void)pAbove:(UIView *)view margin:(CGFloat)margin;
- (void)pRightTo:(UIView *)view margin:(CGFloat)margin;
- (void)pLeftTo:(UIView *)view margin:(CGFloat)margin;
```

- 固定位置(origin)，设置尺寸(size)
这类接口以s开头
```
- (void)sAlignBottom:(UIView *)view offset:(CGFloat)offset;
- (void)sAlignBottom:(UIView *)view;

- (void)sAlignParentBottomOffset:(CGFloat)offset;
- (void)sAlignParentBottom;

- (void)sAlignTop:(UIView *)view offset:(CGFloat)offset;
- (void)sAlignTop:(UIView *)view;

- (void)sAlignParentTopOffset:(CGFloat)offset;
- (void)sAlignParentTop;

- (void)sAlignLeft:(UIView *)view offset:(CGFloat)offset;
- (void)sAlignLeft:(UIView *)view;

- (void)sAlignParentLeftOffset:(CGFloat)offset;
- (void)sAlignParentLeft;

- (void)sAlignRight:(UIView *)view offset:(CGFloat)offset;
- (void)sAlignRight:(UIView *)view;

- (void)sAlignParentRightOffset:(CGFloat)offset;
- (void)sAlignParentRight;

- (void)sBelow:(UIView *)view margin:(CGFloat)margin;
- (void)sAbove:(UIView *)view margin:(CGFloat)margin;
- (void)sRightTo:(UIView *)view margin:(CGFloat)margin;
- (void)sLeftTo:(UIView *)view margin:(CGFloat)margin;

- (void)sizeAsParent;
- (void)sizeAsParentMargin:(CGFloat)margin;
- (void)sizeAsParentMargins:(UIEdgeInsets)magins;

- (void)widthAsParent;
- (void)widthAsParentMargin:(CGFloat)margin;
- (void)widthAsParentMarginsLeft:(CGFloat)leftMargin right:(CGFloat)rightMargin;

- (void)heightAsParent;
- (void)heightAsParentMargin:(CGFloat)margin;
- (void)heightAsParentMarginsTop:(CGFloat)topMargin bottom:(CGFloat)bottomtMargin;
```

- 直接设置/获取位置和尺寸的接口
以p开头和以s开头都有，其效果是一样的
```
@property (nonatomic) CGFloat pX;
@property (nonatomic) CGFloat pY;
@property (nonatomic) CGFloat pWidth;
@property (nonatomic) CGFloat pHeight;

@property (nonatomic) CGFloat pTop;
@property (nonatomic) CGFloat pBottom;
@property (nonatomic) CGFloat pLeft;
@property (nonatomic) CGFloat pRight;

@property (nonatomic) CGFloat pCenterX;
@property (nonatomic) CGFloat pCenterY;
@property (nonatomic) CGPoint pCenter;


@property (nonatomic) CGSize pSize;
@property (nonatomic) CGPoint pOrigin;

@property (nonatomic) CGFloat sX;
@property (nonatomic) CGFloat sY;
@property (nonatomic) CGFloat sWidth;
@property (nonatomic) CGFloat sHeight;

@property (nonatomic) CGFloat sTop;
@property (nonatomic) CGFloat sBottom;
@property (nonatomic) CGFloat sLeft;
@property (nonatomic) CGFloat sRight;

@property (nonatomic) CGSize sSize;
@property (nonatomic) CGPoint sOrigin;
```

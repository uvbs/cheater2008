//---------------------------------------------------------------------------

#ifndef CountEditH
#define CountEditH
//---------------------------------------------------------------------------
#include "Standart/Ansilib.h"
#include "august2002Fwd.h"
#include "MyBaseForm.h"

#include <string>

#include "Resource.h"
#include "AuxiliaryTypedefs.h"
#include "Command.h"




//---------------------------------------------------------------------------
class AUGUST2002_EXPORT TCountEdit : public CMyBaseForm
{
    	DECLARE_DYNAMIC(TCountEdit)
private:

    void CreateInstance(void);
    void  OnResizeEvent();
static unsigned long Instance;
        DWORD FMin;
        DWORD FMax;
public:

    void Create( CWnd* pParentWnd );
    void  setText(const std::string& value);
    std::string  getText();
    DWORD  getMin() const {return FMin;}
    void  setMin(DWORD value);
    DWORD  getMax() const {return FMax;}
    void  setMax(DWORD value);
protected:
    DECLARE_MESSAGE_MAP()


    CEdit* EditField;
    TUpDown* UpDownField;
public:
     TCountEdit(CWnd* pParent = NULL);

     virtual ~TCountEdit(void);
    afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
    afx_msg void OnSize(UINT, int, int);
     //void  UpDownFieldChangingEventEx(TObject* Sender, bool &AllowChange, short NewValue, TUpDownDirection Direction);
    CommandPtr OnChangeEvent;


};
//---------------------------------------------------------------------------
#endif



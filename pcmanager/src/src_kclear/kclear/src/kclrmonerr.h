#ifndef KCLRMONERR_H_
#define KCLRMONERR_H_

//////////////////////////////////////////////////////////////////////////

inline HRESULT GetCurError() 
{
    return ::GetLastError() == ERROR_SUCCESS ? E_FAIL : HRESULT_FROM_WIN32(::GetLastError());
}

//////////////////////////////////////////////////////////////////////////

#endif // KCLRMONERR_H_

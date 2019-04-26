#pragma once


// class singleton has the same goal as all singletons: create one instance of
// a class on demand, then dish it out as requested.
/********************************************************  
    *  @brief    :  copy from boost/thread/detail/singleton.hpp 
    *  @input    :  
    *  @output   :  
    *  @return   :  
*********************************************************/
namespace ns
{
	template <class T>
	class singleton : private T
	{
	private:
		singleton();
		~singleton();

	public:
		static T &instance();
	};


	template <class T>
	inline singleton<T>::singleton()
	{
		/* no-op */
	}

	template <class T>
	inline singleton<T>::~singleton()
	{
		/* no-op */
	}

	template <class T>
	/*static*/ T &singleton<T>::instance()
	{
		// function-local static to force this to work correctly at static
		// initialization time.
		static singleton<T> s_oT;
		return(s_oT);
	}
}

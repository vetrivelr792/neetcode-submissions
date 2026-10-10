func hasDuplicate(nums []int) bool {


    list := make(map[int]int)

    for _, i := range nums{
        if _, exists := list[i]; exists{
            return true
        }
        list[i] = 1
    }
    return false
}

package abc193

private fun readString() = readLine()!!
private fun readInt() = readLine()!!.toInt()
private fun readLong() = readLine()!!.toLong()
private fun readDouble() = readLine()!!.toDouble()
private fun readStringList() = readLine()!!.split(' ')
private fun readIntList() = readLine()!!.split(' ').map { it.toInt() }
private fun readLongList() = readLine()!!.split(' ').map { it.toLong() }
private fun readDoubleList() = readLine()!!.split(' ').map { it.toDouble() }

fun main() {
    val (a, b) = readIntList()

    println("%f".format((1.0 - b.toDouble() / a.toDouble()) * 100))
}